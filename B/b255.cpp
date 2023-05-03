#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> a(K);
    for(int i = 0; i < K; i++) {
        cin >> a[i];
        a[i]--;
    };
    vector<int> x(N), y(N);
    for(int i = 0; i < N; i++) cin >> x[i] >> y[i];

    vector<double> r(N);
    for(int i = 0; i < N; i++){
        r[i] = 1e18;
        for(int j = 0; j < K; j++){
            double dx = x[i] - x[a[j]];
            double dy = y[i] - y[a[j]];
            double dist = sqrt(dx*dx + dy*dy);
            r[i] = min(r[i], dist);
        }
    }
    
    double ans = 0;
    for(int i = 0; i < N; i++) ans = max(ans, r[i]);
    printf("%.10f\n", ans);
} 