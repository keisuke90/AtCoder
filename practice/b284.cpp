#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, N, a, count;

    cin >> T;
    for(int i = 0; i < T; i++){
       count = 0;

       cin >> N;
       for(int i = 0; i < N; i++){
            cin >> a;
            if(a%2==1) count++;
       }
       cout << count << endl;
    }
} 