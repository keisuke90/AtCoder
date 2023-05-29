#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> A(200009, vector<int>());
vector<vector<int>> B(200009, vector<int>());


int main(){
    int N, Q;
    int a, b, c;
    cin >> N >> Q;

    for(int i = 0; i < Q; i++){
        cin >> a;
        if(a == 1) {
            cin >> b >> c;
            A[c].push_back(b);
            B[b].push_back(c);
        } else if(a ==2) {
            cin >> b;
            sort(A[b].begin(), A[b].end());
            for(int j = 0; j < A[b].size(); j++) cout << A[b][j] << " ";
            cout << endl;
        } else {
            cin >> b;
			sort(B[b].begin(), B[b].end());
			B[b].erase(unique(B[b].begin(), B[b].end()), B[b].end());
			for (int j = 0; j < B[b].size(); j++) {
				cout << B[b][j] << "\n "[j + 1 != B[b].size()];
			}
        }
    }
} 