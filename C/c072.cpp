#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int N;
vector<int> A(500009, 0);

int main(){
    cin >> N;
    rep(i, 1, N+1){
        int a;
        cin >> a;
        if(a > 0)A[a-1]++;
        A[a]++;
        if(a < 500000) A[a+1]++;
    }
    sort(A.begin(), A.end(), greater<int>());
    cout << A[0] << endl;
    return 0;
} 