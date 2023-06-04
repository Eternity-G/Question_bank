// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef vector<pair<int,int>> vpii;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// #define debug() cout << "debug:"
// const int inf=0x3f3f3f3f;
// const int maxn=2e5+5;
// int xx[] = {1, -1, 0, 0};
// int yy[] = {0, 0, 1, -1};
// int n, m;
// char mp[2020][2020];
// int vis[2020][2020];
// int f[2020][2020];
// int ans = inf;
// int cnt;
// queue<pii> q;
// void bfs(int x,int y){
//     q.push({x,y});
//     vis[x][y]=1;
//     f[x][y] = 0;
//     while (!q.empty()){
//         int a = q.front().first;
//         int b = q.front().second;
//         for (int i = 0; i < 4; i++){
//             int dx = a + xx[i];
//             int dy = b + yy[i];
//             if (dx <= n + 1 && dy <= n + 1 && dx >= 0 && dy >= 0&& !vis[dx][dy]){
//             //如果在区域内，且没有被标记过，
//                 q.push({dx, dy});//入队
//                 int num = 0;
//                 if(mp[dx][dy]=='.')
//                     num++;
//                 f[dx][dy] = f[q.front().first][q.front().second] + num;
//                 vis[dx][dy] = 1;//标记
//             }
//         }
//         q.pop();//出队
//     }
// }
// void solve(){
//     cin >> n >> m;
//     memset(f, inf, sizeof(f));
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= m;j++){
//             cin >> mp[i][j];
//         }
//     }
//     bfs(1, 1);
//     ans = f[n][m];
//     if(ans!=inf)
//         cout << ans << nl;
//     else
//         cout << -1 << nl;
// }
// int main(){
//     //ios::sync_with_stdio(0);
//     //freopen("in", "r", stdin);
//     int t = 1;
//     //cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
#define debug() cout << "debug:"
const int inf=0x3f3f3f3f;
const int maxn=2e5+5;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m;
struct node{
    int x,y,dis;
    bool operator<(const node &a) const {
        return dis > a.dis; 
    }
};
int flag;
char mp[2020][2020];
int f[2020][2020];
priority_queue<node> q;
void dijkstra(int x,int y,int dis){
    q.push({x, y, dis}); //起点的花费为0
    f[0][0] = 0;
    while(!q.empty()){
        auto t = q.top();
        q.pop();
        if(t.dis > f[t.x][t.y])
            continue;
        for (int i = 0; i < 4; i++){
            int xx = t.x + dx[i];
            int yy = t.y + dy[i];
            if(xx < 1 || xx > n || yy < 1 || yy > m)
                continue;
            if(mp[xx][yy] == '#')
                continue;
            int cost = t.dis + 1;
            if(mp[xx][yy] == '*')
                cost--;
            if (f[xx][yy] > cost){
                f[xx][yy] = cost;//更新从原点到xx，yy的距离
                q.push({xx, yy, cost});
            }
        }
    }
}
void solve(){
    cin >> n >> m;
    memset(f, inf, sizeof(f));
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            cin >> mp[i][j];
        }
    }
    dijkstra(1, 1, 0);
    if (f[n][m] == inf)
        cout << -1 << nl;
    else
        cout << f[n][m] << nl;
}
int main(){
    //ios::sync_with_stdio(0);
    //freopen("in", "r", stdin);
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
