#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    sort(vec.begin(), vec.end());
    if(vec[1] == b) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 