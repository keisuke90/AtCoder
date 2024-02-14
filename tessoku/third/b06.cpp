#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(100009);
    rep(i, 1, n+1) cin >> vec[i];
    vector<int> atari(100009);
    vector<int> hazure(100009);
    rep(i, 1, n+1) {
        atari[i] = atari[i-1];
        hazure[i] = hazure[i-1];
        if(vec[i]) atari[i]++;
        else hazure[i]++;
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int l, r;
        cin >> l >> r;
        int ataricnt = atari[r] - atari[l-1];
        int hazurecnt = hazure[r] - hazure[l-1];
        if(ataricnt == hazurecnt) cout << "draw" << endl;
        else if (ataricnt > hazurecnt) cout << "win" << endl;
        else cout << "lose" << endl;
    }


    return 0;
} 