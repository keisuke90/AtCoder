#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    map<long long , int> mp;
    int i = 1;
    while(true) {
        long long tmp = a*i;
        if(tmp%b==c) {
            cout << "YES" << endl;
            return 0;
        }
        if(mp[tmp%b]>0) break;
        else mp[tmp%b]++;
        i++;
    }
    cout << "NO" << endl;
    return 0;
} 