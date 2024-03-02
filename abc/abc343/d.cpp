#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    map<int, long long> scoreMap;
    map<long long, int> mp;
    set<long long> uniqueScores;
    rep(i, 1, n+1) scoreMap[i] = 0;
    uniqueScores.insert(0);
    mp[0] = n;

    rep(i, 1, t+1) {
        int a, b;
        cin >> a >> b;
        if(scoreMap.count(a) > 0) {
            long long oldScore = scoreMap[a];
            mp[oldScore]--;
            if(mp[oldScore] == 0) {
                uniqueScores.erase(oldScore);
            }
        }

        scoreMap[a] += b;
        mp[scoreMap[a]]++;
        uniqueScores.insert(scoreMap[a]);
        cout << uniqueScores.size()  << endl;
    }

    return 0;
} 