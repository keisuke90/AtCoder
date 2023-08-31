#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int ans = 0;

void calc(int m, int n, int N) {
    if(N >= m) {
        ans += N/m * n;
        N = N/m*n + N%m;
        calc(m, n, N);
    } else {
        return;
    }
}

int main(){
    int m, n, N;
    cin >> m >> n >> N;
    ans += N;
    calc(m, n, N);

    cout << ans << endl;
    return 0;
} 