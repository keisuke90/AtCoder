#include <bits/stdc++.h>
using namespace std;

long long N, K;
long long A[100009];

bool check(long long x){
    long long sum = 0;
    for(int i = 1; i <= N; i++) sum += x/A[i];
    if(sum >= K) return true;
    return false;
}

int main(){
    cin >> N >> K;
    for(int i = 1; i <= N; i++) cin >> A[i];

    long long Left = 1, Right = 1000000000;
    while (Left < Right){
        long long Mid = (Left  + Right ) / 2;
        bool Answer = check(Mid);
        if(!Answer) Left = Mid + 1;
        if(Answer) Right = Mid;
    }
    cout << Left << endl;
} 