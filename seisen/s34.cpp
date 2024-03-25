#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

map<int, long long> mp;

long long f(long long n) {
    if(n == 0 || n == 1) return 1;
    if(!mp[n-2]) mp[n-2] = f(n-2);
    if(!mp[n-1]) mp[n-1] = f(n-1);
    return mp[n-2] + mp[n-1];
}

int main(){
    int n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
} 