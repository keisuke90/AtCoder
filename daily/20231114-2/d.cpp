#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, vector<bool>>> vec(n, {0, vector<bool>(m)});
    rep(i, 0, n) {
        int p, c;
        cin >> p >> c;
        vec[i].first = p;
        rep(j, 0, c) {
            int a;
            cin >> a;
            a--;
            vec[i].second[a] = true;
        }
    }

    rep(i, 0, n) {
        rep(j, 0, n) {
            if(i == j) continue;
            if(vec[i].first < vec[j].first) continue;
            bool ok = true;
            int cnt = 0;
            rep(k, 0, m) {
                if(vec[i].second[k] && !vec[j].second[k]) {
                    ok = false;
                    break;
                }
                if(!vec[i].second[k] && vec[j].second[k]) {
                    cnt++;
                }
            }

            if(!ok) continue;
            if(vec[i].first == vec[j].first) {
                if(cnt == 0) continue;
            } 
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
} 