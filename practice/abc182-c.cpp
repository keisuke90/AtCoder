#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    int sum = 0;
    vector<int> vec(3);
    string s = to_string(n);
    rep(i, 0, s.size()) {
        sum+=s[i]-'0';
        if(s[i]%3==0) vec[0]++;
        if(s[i]%3==1) vec[1]++;
        if(s[i]%3==2) vec[2]++;
    }

    if(sum%3==0) {
        cout << 0 << endl;
        return 0;
    } else if(sum%3==1) {
        if(s.size()==1 && vec[1] > 0) {
            cout << -1 << endl;
            return 0;
        } else if (vec[1] > 0) {
            cout << 1 << endl;
            return 0;
        } else {
            if(s.size()==2) {
                cout << -1 << endl;
                return 0;
            } else {
                cout << 2 << endl;
                return 0;
            }
        }
    } else if(sum%3==2) {
        if(vec[2]>0 && s.size()==1) {
            cout << -1 << endl;
            return 0;
        } else if(vec[2]>0) {
            cout << 1 << endl;
            return 0;
        } else {
            if(s.size()==2) {
                cout << -1 << endl;
                return 0;
            } else {
                cout << 2 << endl;
                return 0;
            }
        }
    }
    
    return 0;
} 