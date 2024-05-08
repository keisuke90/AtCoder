#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;


int main(){
    int n;
    cin >> n;
    map<int, int> primes;

    rep(i, 0, n) {
        int a;
        cin >> a;
        int x = a;
        map<int, int> mp;
        for(int i=2; i*i<=a; i++) {
            while(x%i==0) {
                x/=i;
                if(!mp[i]) primes[i]++, mp[i]++;
            }
        }
        if(x!=1 && !mp[x]) primes[x]++;
    }

    int div = 0;
    for(auto v : primes) div = max(div, v.second);


    if(div == 1 || div == 0) cout << "pairwise coprime" << endl;
    else if(div < n) cout << "setwise coprime" << endl;
    else cout << "not coprime" << endl;
    return 0;
} 