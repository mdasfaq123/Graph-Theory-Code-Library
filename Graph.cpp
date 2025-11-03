#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 105;
int g[N][N];
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int u, v;
        cin >> u >> v;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    if(g[4][2]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
