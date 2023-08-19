#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int m;
    vector<int> d(109), D(109);
    int sum = 0;

    cin >> m;
    rep(i, 1, m+1) {
        cin >> d[i];
        sum += d[i];
        D[i] = d[i] + D[i-1];
    } 
    int total = sum/2+1;
    int month, day;

    rep(i, 1, m+1) {
        if(D[i] >= total) {
            month = i;
            day = total - D[i-1];
            break;
        }
    }
    cout << month << ' ' << day << endl;
    return 0;
} 