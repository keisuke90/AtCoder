#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>>a){
	int n = a.size();
	vector<vector<int>> res(n, vector<int>(n));
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) res[j][n - 1 - i] = a[i][j];
	return res;
}

int main(){
    int N;
    cin >> N;
    bool check = true;
    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) cin >> A[i][j];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) cin >> B[i][j];
    }

    for(int i = 0; i < 4; i++){
        check = true;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(A[i][j] == 1 && B[i][j] == 0) check = false;
            }
        }
        if(check){
            cout << "Yes" << endl;
            return 0;
        }
        A = rotate(A);
    }

    cout << "No" << endl;

} 