#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n;
vector<bool> deleted(1000009, false);

int main(){
    cin >> n;

    for(int i = 2; i<=n; i++) {
        if(deleted[i]) continue;
        for(int j = i*2; j<=n; j+=i) {
            deleted[j] = true;
        }
    }

    for(int i = 2; i<=n; i++) {
        if(!deleted[i]) cout << i << endl;
    }
    return 0;
} 