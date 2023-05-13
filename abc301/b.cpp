#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N;
    vector<int> A;
    cin >> N;
    bool flag = true;
    rep(i, 0, N) {
        int a;
        cin >> a;
        A.push_back(a);
    }

    while(flag){
        flag = false;
        rep(i, 0, A.size()-1){
            if((A[i] - A[i+1]) < -1){
                A.insert(A.begin()+i+1, A[i]+1);
                flag = true;
                continue;
            }
            if(A[i] - A[i+1] > 1){
                A.insert(A.begin()+i+1, A[i]-1);
                flag = true;
                continue;
            }
        }
    }

    rep(i, 0, A.size()) cout << A[i] << ' ';
    cout << endl;

    return 0;
} 