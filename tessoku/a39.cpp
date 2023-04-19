#include <bits/stdc++.h>
using namespace std;
int N;
int L[300009], R[300009];
vector<pair<int, int>> tmp;

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> L[i] >> R[i];
        tmp.push_back(make_pair(R[i], L[i]));
    }

    sort(tmp.begin(), tmp.end());
    for(int i = 1; i <= N; i++){
        R[i] = tmp[i-1].first;
        L[i] = tmp[i-1].second;
    }

    int now = 0;
    int ans = 0;

    for(int i = 1; i <= N; i++){
        if(now <= L[i]){
            now = R[i];
            ans += 1;
        }
    }

    cout << ans << endl;
} 