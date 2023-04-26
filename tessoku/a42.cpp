#include <bits/stdc++.h>
using namespace std;

int N, K;
int A[309], B[309];

int getScore(int a, int b){
    int cnt = 0;
    for(int i = 1; i <= N; i++){
        if(a<=A[i] && A[i]<=a+K && b<=B[i] && B[i]<=b+K) cnt++;
    }
    return cnt;
}

int main(){
    cin >> N >> K;
    for(int i = 1; i <= N; i++) cin >> A[i] >> B[i];

    int ans = 0;
    for(int a = 1; a <= 100; a++){
        for(int b = 1; b <= 100; b++){
            int score = getScore(a, b);
            ans = max(ans, score);
        }
    }

    cout << ans << endl;
} 