#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n;
vector<vector<int>> ans;

void Work( int &x, int &y, int dx, int dy, int k, int val )
{
    for( int i=0; i<k; ++i )
    {
        x += dx;
        y += dy;
        ans[y][x] = val + i;
    }
}



int main(){
    cin >> n;
    ans = vector<vector<int>> (n, vector<int>(n, 0));
    int x = -1;
    int y = 0;
    int dx = 1;
    int dy = 0;

    Work( x,y, dx, dy, n, 1 );

    int k = n - 1;
    int val = n + 1;
    while( k>0 )
    {
        for( int i=0; i<2; ++i )
        {
            swap( dx, dy );
            dx = -dx;
            Work( x,y, dx, dy, k, val );
            val += k;
        }
        --k;
    }

    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ ) {
            if(i==n/2 && j==n/2) cout << 'T' << ' ';
            else cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
    
} 