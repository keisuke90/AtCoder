#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
vector<vector<bool>> colored(2009, vector<bool>(2009));
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

struct dsu {
  public:
    dsu() : _n(0) {}
    explicit dsu(int n) : _n(n), parent_or_size(n, -1) {}

    int merge(int a, int b) {
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        int x = leader(a), y = leader(b);
        if (x == y) return x;
        if (-parent_or_size[x] < -parent_or_size[y]) std::swap(x, y);
        parent_or_size[x] += parent_or_size[y];
        parent_or_size[y] = x;
        return x;
    }

    bool same(int a, int b) {
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        return leader(a) == leader(b);
    }

    int leader(int a) {
        assert(0 <= a && a < _n);
        if (parent_or_size[a] < 0) return a;
        return parent_or_size[a] = leader(parent_or_size[a]);
    }

    int size(int a) {
        assert(0 <= a && a < _n);
        return -parent_or_size[leader(a)];
    }

    std::vector<std::vector<int>> groups() {
        std::vector<int> leader_buf(_n), group_size(_n);
        for (int i = 0; i < _n; i++) {
            leader_buf[i] = leader(i);
            group_size[leader_buf[i]]++;
        }
        std::vector<std::vector<int>> result(_n);
        for (int i = 0; i < _n; i++) {
            result[i].reserve(group_size[i]);
        }
        for (int i = 0; i < _n; i++) {
            result[leader_buf[i]].push_back(i);
        }
        result.erase(
            std::remove_if(result.begin(), result.end(),
                           [&](const std::vector<int>& v) { return v.empty(); }),
            result.end());
        return result;
    }

  private:
    int _n;
    // root node: -1 * component size
    // otherwise: parent
    std::vector<int> parent_or_size;
};

int main(){
    int h, w, q;
    cin >> h >> w >> q;

    dsu uf(2009*2009);

    rep(i, 0, q) {
        int Q;
        cin >> Q;
        if(Q == 1) {
            int x, y;
            cin >> x >> y;
            colored[y][x] = true;
            rep(i, 0, 4) {
                int hash1 = x*w+y;
                int hash2 = (x+dx[i])*w+(y+dy[i]);
                if(colored[y+dy[i]][x+dx[i]]) uf.merge(hash1, hash2);
            }
        } else {
            int ax, ay, bx, by;
            cin >> ax >> ay >> bx >> by;
            int hash1 = ax*w+ay;
            int hash2 = bx*w+by;
            if(colored[ay][ax]&&colored[by][bx]) {
                if(uf.same(hash1, hash2)) cout << "Yes" << endl;
                else cout << "No" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
} 