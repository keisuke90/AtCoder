#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long h, w, m;
    cin >> h >> w >> m;
    map<long long, long long> colors;
    long long m_row = 0, m_column= 0;
    vector<long long> row(h, w), column(w, h);
    vector<long long> t(m), a(m), x(m);
    rep(i, 0, m) cin >> t[i] >> a[i] >> x[i];
    reverse(t.begin(), t.end());
    reverse(a.begin(), a.end());
    reverse(x.begin(), x.end());

    rep(i, 0, m) {
        a[i]--;
        if(t[i]==1) {
            if(row[a[i]]+m_row>0) {
                colors[x[i]] += row[a[i]]+m_row;
                m_column--;
                row[a[i]] = 0;
            }
        } else if(t[i]==2) {
            if(column[a[i]]+m_column>0) {
                colors[x[i]] += column[a[i]]+m_column;
                m_row--;
                column[a[i]] = 0;
            }
        }
    }
    if((h+m_column)*(w+m_row)>0) {
        colors[0] += (h+m_column)*(w+m_row);
    }

    cout << colors.size() << endl;
    for(auto v : colors) {
        cout << v.first << ' ' << v.second << endl;
    }

    return 0;
} 