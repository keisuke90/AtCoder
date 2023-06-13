// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int n, x, a[100009];

// int search (int x) {
//     int l = 1, r = n;
//     while(l <= r) {
//         int m = (l + r) / 2;
//         if(x < a[m]) r = m - 1;
//         if(x == a[m]) return m;
//         if(x > a[m]) l = m + 1;
//     }
//     return -1;
// }

// int search(int x) {
//     int pos = lower_bound(a+1, a+n+1, x) - a;
//     if(pos <= n && a[pos] == x) return pos;
//     return -1;
// }

// int main(){
//     cin >> n >> x;
//     rep(i, 1, n+1) cin >> a[i];

//     int ans = search(x);
//     cout << ans << endl;

//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, x;
vector<int> a(100009);

int search(int x) {
    int ans = lower_bound(a.begin(), a.begin() + n, x) - a.begin();
    if(ans < n && a[ans] == x) return ans;
    else return -1;
}

int main(){
    cin >> n >> x;
    rep(i, 0, n) cin >> a[i];

    int ans = search(x) + 1;
    cout << ans << endl;

    return 0;
} 