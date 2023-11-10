#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<int, bool> mp;
    map<int, int> mp2;
    int ac = 0;
    int wa = 0;

    rep(i, 0, m) {
        int p;
        p--;
        string s;
        cin >> p >> s;

        if(s=="WA" && !mp[p]) mp2[p]+=1;
        if(s=="AC") mp[p] = true;
    }

    for(auto m : mp) if(m.second) ac++;
    for(auto m : mp2) if(mp[m.first]) wa+=m.second;

    cout << ac << ' ' << wa << endl;

    return 0;
} 