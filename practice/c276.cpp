#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    for(int i = n-2; i >= 0; i--) {
        if(p[i] > p[i+1]) {
            int j = n-1;
            while (p[i] < p[j]) j--;
            swap(p[i],p[j]);
            reverse(p.begin()+(i+1), p.end());
            break;
        }
    }

    for(int i = 0; i < n; i++) cout << p[i] << ' ';
    cout << endl;
}