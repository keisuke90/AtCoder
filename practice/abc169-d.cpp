#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

map<long long, int> enumpr(long long n) {
	map<long long, int> V;
	for (long long i = 2; i * i <= n; i++) while (n % i == 0) V[i]++, n /= i;
	if (n > 1) V[n]++;
	return V;
}

int main(){
    long long n;
    cin >> n;
    map<long long, int> mp = enumpr(n);

    long long ans = 0;
    for(auto v : mp) {
        int cnt = v.second;
        rep(i, 1, 1001) {
            if(i <= cnt) {
                ans++;
                cnt -= i;
            }
        }
    }
    cout << ans << endl;
    return 0;
} 

