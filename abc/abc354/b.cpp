#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<string, int>> vec(n);
    int sum = 0;
    rep(i, 0, n){
        string s;
        int c;
        cin >> s >> c;
        vec[i] = {s, c};
        sum+=c;
    }

    sort(vec.begin(), vec.end());
    rep(i, 0, n) {
        if(i == sum%n) {
            cout << vec[i].first << endl;
            return 0;
        }
    }
    return 0;
} 