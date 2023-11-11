#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> vec(n), vec2(n);
    long long sum = 0;
    rep(i, 0, n) cin >> vec[i], sum+=vec[i];
    vec2 = vec;
    rep(i, 1, n) vec2[i]+=vec2[i-1];
    int t = lower_bound(vec2.begin(), vec2.end(), sum/2) - vec2.begin();

    int f = vec2[t];
    int b = vec2[n-1] - vec2[t];
    int f1 = vec2[t-1];
    int b2 = vec2[n-1] - vec2[t-1];

    cout << min(abs(f-b), abs(f1-b2)) << endl;

    return 0;
} 