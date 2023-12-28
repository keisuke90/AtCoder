#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

struct dsu {
  public:
    dsu() : _n(0) {}
    explicit dsu(long n) : _n(n), parent_or_size(n, -1) {}

    long merge(long a, long b) {
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        long x = leader(a), y = leader(b);
        if (x == y) return x;
        if (-parent_or_size[x] < -parent_or_size[y]) std::swap(x, y);
        parent_or_size[x] += parent_or_size[y];
        parent_or_size[y] = x;
        return x;
    }

    bool same(long a, long b) {
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        return leader(a) == leader(b);
    }

    long leader(long a) {
        assert(0 <= a && a < _n);
        if (parent_or_size[a] < 0) return a;
        return parent_or_size[a] = leader(parent_or_size[a]);
    }

    long size(long a) {
        assert(0 <= a && a < _n);
        return -parent_or_size[leader(a)];
    }

    std::vector<std::vector<long>> groups() {
        std::vector<long> leader_buf(_n), group_size(_n);
        for (long i = 0; i < _n; i++) {
            leader_buf[i] = leader(i);
            group_size[leader_buf[i]]++;
        }
        std::vector<std::vector<long>> result(_n);
        for (long i = 0; i < _n; i++) {
            result[i].reserve(group_size[i]);
        }
        for (long i = 0; i < _n; i++) {
            result[leader_buf[i]].push_back(i);
        }
        result.erase(
            std::remove_if(result.begin(), result.end(),
                           [&](const std::vector<long>& v) { return v.empty(); }),
            result.end());
        return result;
    }

  private:
    long _n;
    // root node: -1 * component size
    // otherwise: parent
    std::vector<long> parent_or_size;
};

struct Edge {
    int a, b;
    long long w;
    Edge() {}
    Edge(int a, int b, long long w): a(a), b(b), w(w) {}
};

int main(){
    int n, m;
    long long k;
    cin >> n >> m >> k;
    vector<Edge> es;
    rep(i, 0, m) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        u--; v--;
        es.emplace_back(u, v, w);
    }

    const long long INF = 1e18;
    long long ans = INF;

    auto dfs = [&](auto dfs, int i, vector<int> is) -> void {
        if(is.size() == n-1) {
            dsu uf(n);
            bool ok = true;
            long long now = 0;
            for(int ei : is) {
                auto e = es[ei];
                if(uf.same(e.a, e.b)) ok = false;
                uf.merge(e.a, e.b);
                now = (now+e.w)%k;
            }
            if(ok) ans = min(ans, now);
            return;
        }
        if(i==m) return;
        dfs(dfs, i+1, is);
        is.push_back(i);
        dfs(dfs, i+1, is);
    };
    dfs(dfs, 0, {});

    cout << ans << endl;
    return 0;
} 