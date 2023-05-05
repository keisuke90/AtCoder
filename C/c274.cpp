#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> p(N*2+2);
    for(int i = 1; i <= N; i++){
        int a;
        cin >> a;
        p[i*2] = a;
        p[i*2+1] = a;
    } 
    vector<int> ans(N*2+2);
    for(int i = 2; i <= N*2+1; i++) {
        ans[i] = ans[p[i]]+1;
    }
    for(int i = 1; i <= N*2+1; i++){
        cout << ans[i]  << ' ';
    }
    cout << endl;
} 