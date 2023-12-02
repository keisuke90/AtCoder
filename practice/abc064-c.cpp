#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> st;
    int red = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        if(a<400) {
            st.insert("gray");
        } else if(a<800) {
            st.insert("brown");
        } else if(a<1200) {
            st.insert("green");
        } else if(a<1600) {
            st.insert("water");
        } else if(a<2000) {
            st.insert("blue");
        } else if(a<2400) {
            st.insert("yellow");
        } else if(a<2800) {
            st.insert("orange");
        } else if(a<3200) {
            st.insert("red");
        } else {
            red++;
        }
    }
    if(st.size()>0) {
        if(red==0) {
            cout << st.size() << ' ' << st.size() << endl;
        } else {
            cout << st.size() << ' ' << st.size() + red << endl;
        }
    } else {
        if(red==0) {
            cout << 0 << ' ' << 0 << endl;
        } else {
            cout << 1 << ' ' << red << endl;
        }
    }

    return 0;
} 