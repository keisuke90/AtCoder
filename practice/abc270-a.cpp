#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    // set<int> s;

    // if(a == 7) {
    //     s.insert(1);
    //     s.insert(2);
    //     s.insert(4);
    // } else if (a == 6) {
    //     s.insert(2);
    //     s.insert(4);
    // } else if (a == 5) {
    //     s.insert(1);
    //     s.insert(4);
    // } else if (a == 4) {
    //     s.insert(4);
    // } else if (a == 3) {
    //     s.insert(2);
    //     s.insert(1);
    // } else if (a == 2) {
    //     s.insert(2);
    // } else if(a==1) {
    //     s.insert(1);
    // }
    // if(b == 7) {
    //     s.insert(1);
    //     s.insert(2);
    //     s.insert(4);
    // } else if (b == 6) {
    //     s.insert(2);
    //     s.insert(4);
    // } else if (b == 5) {
    //     s.insert(1);
    //     s.insert(4);
    // } else if (b == 4) {
    //     s.insert(4);
    // } else if (b == 3) {
    //     s.insert(2);
    //     s.insert(1);
    // } else if (b == 2) {
        
    //     s.insert(2);
    // } else if(b==1) {
    //     s.insert(1);
    // }
    
    // int ans = 0;
    // for(auto ss: s){
    //     ans += ss;
    // }
    int ans = a | b;
    cout << ans << endl;

    return 0;
}