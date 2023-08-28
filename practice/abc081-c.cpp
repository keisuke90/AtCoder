#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    set<int> s;
    vector<int> vec(200009, 200009);
    cin >> n >> k;
    rep(i, 0, n) {
        int a;
        cin >> a;
        s.insert(a);
        if(vec[a] == 200009) vec[a] = 1;
        else vec[a]++;
    }
    
    int diff = s.size() - k;
    sort(vec.begin(), vec.end());
    int ans = 0;
    rep(i, 0, diff) ans += vec[i];

    cout << ans << endl;

    return 0;
} 