#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int main() {
    int H, N;
    cin >> H >> N;
    vector<int> A(N), B(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<int> dp(H + 1, 1e9);
    dp[0] = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= H; j++) {
            int next = min(H, j + A[i]);
            dp[next] = min(dp[next], dp[j] + B[i]);
        }
    }

    cout << dp[H] << endl;
    return 0;
}
