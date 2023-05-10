#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

const int MaxA = 200;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, 0, N) cin >> a[i];
    vector<int> d(MaxA*2+1);
    long long ans = 0;
    rep(i, 0, N){
        for(int aj = -MaxA; aj <= MaxA; aj++){
            int c = d[MaxA+aj];
            int x = a[i]-aj;
            ans += (long long)x*x*c;
        }
        d[MaxA+a[i]]++;
    }
    cout << ans << endl;
    return 0;
} 