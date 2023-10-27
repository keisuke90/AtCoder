#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, a, b, p, q, r, s, x, y;
    cin >> n >> a >> b >> p >> q >> r >> s;
    long long k1r, k1l, k2r, k2l;
    vector<string> vec;
    string str = "";
    for(long long i = 0; i < (s - r + 1); i++) str += '.';
    for(long long i = 0; i < (q - p + 1); i++) vec.push_back(str);
    x = max(p-a, r-b);
    y = min(q-a, s-b);
    for(long long i = x; i <= y; i++) vec[a+i-p][b+i-r] = '#';
    x = max(p-a, b-s);
    y = min(q-a, b-r);
    for(long long i = x; i <= y; i++) vec[a+i-p][b-i-r] = '#';

    for(long long i = 0; i < (q-p+1); i++) cout << vec[i] << endl;
    return 0;
} 