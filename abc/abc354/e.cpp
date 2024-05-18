#include <bits/stdc++.h>
using namespace std;

unordered_map<int, bool> memo;

bool canWin(int state, const vector<int>& A, const vector<int>& B, int n) {
    if (memo.count(state)) return memo[state];

    for (int i = 0; i < n; ++i) {
        if (!(state & (1 << i))) continue;

        for (int j = i + 1; j < n; ++j) {
            if (!(state & (1 << j))) continue;

            if (A[i] == A[j] || B[i] == B[j]) {
                int newState = state & ~(1 << i) & ~(1 << j);
                if (!canWin(newState, A, B, n)) {
                    memo[state] = true;
                    return true;
                }
            }
        }
    }

    memo[state] = false;
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i] >> B[i];
    }

    int initialState = (1 << n) - 1;
    memo.clear();

    if (canWin(initialState, A, B, n)) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }

    return 0;
}
