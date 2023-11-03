#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int v;
    cin>>v;
    vector<int> vec(3);
    rep(i, 0, 3) {
        cin >> vec[i];
    }
    vector<char> vec2 = {'F', 'M', 'T'};

    while(v >= 0) {
        rep(i, 0, 3) {
            v-=vec[i];
            if(v < 0) {
                cout << vec2[i] << endl;
                return 0;
            }
        }
    }
    return 0;
} 