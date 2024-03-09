#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    map<int, int> A;
    int prev = -1, first;
    unordered_map<int, int> prevMap, nextMap;
    rep(i, 0, N) {
        int x;
        cin >> x;
        if (i == 0) first = x;
        if (prev != -1) {
            A[prev] = x;
            prevMap[x] = prev;
        }
        prev = x;
    }
    cin >> Q;
    rep(i, 0, Q) {
        int type;
        cin >> type;
        if (type == 1) {
            int x, y;
            cin >> x >> y;
            nextMap[y] = A[x];
            if (A.find(x) != A.end()) {
                prevMap[A[x]] = y;
            }
            A[y] = A[x];
            A[x] = y;
            prevMap[y] = x;
        } else if (type == 2) {
            int x;
            cin >> x;
            if (x == first) {
                first = A[x];
                prevMap[first] = -1;
            } else {
                A[prevMap[x]] = A[x];
                if(A[x] != 0) {
                    prevMap[A[x]] = prevMap[x];
                }
            }
            A.erase(x);
            prevMap.erase(x);
            nextMap.erase(x);
        }
    }

    cout << first << " ";
    for (int x = A[first]; x != 0; x = A[x]) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
