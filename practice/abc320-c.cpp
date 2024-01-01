#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int m;
    cin >> m;
    vector<string> vec(3);
    rep(i,0,3) cin >> vec[i];

    vector<int> slot = {0, 1, 2};
    
    int ans = 1000000000;
	for (int i = 0; i < m; ++i) {
		for (int j = 1; j <= m; ++j) {
			for (int k = 1; k <= m; ++k) {
				do {
					char c0, c1, c2;
					c0 = vec[slot[0]][i];
					c1 = vec[slot[1]][(i + j) % m];
					c2 = vec[slot[2]][(i + j + k) % m];
					if ((c0 == c1)&&(c1 == c2)) {
						ans = min(ans, i + j + k);
					}
				} while (next_permutation(slot.begin(), slot.end()));
			}
		}
	}

    if(ans == 1000000000) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
} 