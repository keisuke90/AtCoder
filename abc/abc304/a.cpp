#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<string, long long>> vec(n);
    rep(i, 0, n) {
        string s;
        long long a;
        cin >> s >> a;
        vec[i] = make_pair(s, a);
    }

    long long mina = 1e9;
    rep(i, 0, n) {
        mina = min(mina, vec[i].second);
    }

    bool ok = false;
    while(vec.size()>0){
        rep(i, 0, vec.size()){
            if(ok && vec[i].second == mina) return 0;
            if(vec[i].second == mina) ok = true;
            if(ok) {
                cout << vec[i].first << endl;
            }

        }
    }

    return 0;
} 