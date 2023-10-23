#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    vector<int> ans;


    while(n > 0) {
        n--;
        long long tmp = n%26;
        ans.push_back(tmp);
        n/=26;
    }

    reverse(ans.begin(), ans.end());
    rep(i, 0, ans.size()) {
        cout << alp[ans[i]];
    }
    cout << endl;
    return 0;
} 