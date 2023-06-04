// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while(t--){
//         string s;
//         cin >> s;
//         int n = s.size();
//         int cnta = 0, cntb = 0, cntc = 0;
//         for (int i = 0; i < n;i++){
//             if(s[i]=='A')
//                 cnta++;
//             else if(s[i]=='B')
//                 cntb++;
//             else
//                 cntc++;
//         }
//         if(cnta+cntc==cntb)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

// //B
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n + 1];
//         int arr2[n + 1];
//         for (int i = 1; i <= n;i++){
//             cin >> arr[i];
//             arr2[i] = arr[i];
//         }
//         vector<int> ans[n];
//         int m = 0, c = 0;
//         sort(arr + 1, arr + n + 1);
//         for (int i = 1; i <= n;i++){
//             queue<int> q;
//             for (int j = i; j <= n;j++){
//                 if(arr2[j]==arr[i]&&i==j){
//                     c++;
//                     break;
//                 }
//                 else if(arr2[j]==arr[i]){
//                     arr2[i] = arr[i];
//                     ans[m].push_back(i);
//                     ans[m].push_back(j);
//                     ans[m].push_back(j - i);
//                     for (int k = i + 1; k <= j;k++){
//                         int t = q.front();
//                         q.pop();
//                         arr2[k] = t;
//                     }
//                     m++;
//                     break;
//                 }
//                 else{
//                     q.push(arr2[j]);
//                 }
//             }
//         }
//         cout << (n - c) << endl;
//         for (int i = 0; i < n;i++){
//             if(ans[i].size()==0)
//                 continue;
//             for (int j = 0; j < ans[i].size();j++){
//                 cout << ans[i][j] << " ";
//             }
//             cout << "\n";
//         }
//     }
//     return 0;
// }

// //C
// #include<bits/stdc++.h>
// using namespace std;
// #define itn int
// char a[20][200];
// itn n, m, k;
// void solve(){
//     cin >> n >> m >> k;
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= m;j++){
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 1; i <= n; i++){  
//         for (int j = 1; j <= m; j++){       
//             if (a[i][j] == '.')
//                 continue;
//             int x=1;
//             while (i - x >= 1 && j - x >= 1 && j + x <= m && a[i - x][j - x] != '.' && a[i - x][j + x] != '.')
//                 x++;
//             x--;
//             if (x >= k){            
//                 a[i][j] = 'a';
//                 for (int k = 1; k <= x; k++){
//                     a[i - k][j - k] = 'a';
//                     a[i - k][j + k] = 'a';
//                 }
//             }
//         }
//     }
//     int flag=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             if(a[i][j]=='*')
//             {
//                 flag=0;
//                 break;
//             }
//         }
//     }
//     if(flag==1)
//         printf("YES\n");
//     else
//         printf("NO\n");
// }
// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


// //D
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         priority_queue<pair<int, int>> pg;
//         for (int i = 0; i < n;i++){
//             int a;
//             cin >> a;
//             if(a!=0){
//                 arr[i] = a;
//                 pg.push({a, i + 1});//pair<int, int>(a, i + 1)
//             }
//         }
//         vector<pair<int, int>> ans;
//         while(pg.size()>1){
//             auto p1 = pg.top();
//             pg.pop();
//             auto p2 = pg.top();
//             pg.pop();
//             ans.push_back({p2.second, p1.second});
//             p1.first -= 1;
//             p2.first -= 1;
//             if(p1.first!=0)
//                 pg.push(p1);
//             if(p2.first!=0)
//                 pg.push(p2);
//         }
//         cout << ans.size()<<endl;
//         for(auto i:ans){
//             cout << i.first << " " << i.second << endl;
//         }
//     }
//     return 0;
// }


// //E1
// #include<bits/stdc++.h>
// using namespace std;
// int t,n,a;
// deque<int> q;
// int main(){
//     ios::sync_with_stdio(0);
//     cin >> t;
//     while(t--){
//         cin >> n;
//         q.clear();
//         for (int i = 1; i <= n;i++){
//             cin >> a;
//             if(i==1)
//                 q.push_back(a);
//             else{
//                 if(q.front()>a)
//                     q.push_front(a);
//                 else
//                     q.push_back(a);
//             }
//         }
//         for(auto i:q)
//             cout << i << ' ';
//         cout << "\n";
//     }
//     return 0;
// }


//E2
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define INF 0x3f3f3f3f

// char *p1, *p2, buf[100000];
// #define nc() (p1==p2 && (p2=(p1=buf)+fread(buf,1,10000,stdin),p1==p2)?EOF:*p1++)
// int read(){
//     int x = 0, f = 1;
//     char ch = nc();
//     while(ch<48||ch>57){
//         if(ch=='-')
//             f = -1;
//         ch = nc();
//     }
//     while(ch>=48&&ch<=57){
//         x = x * 10 + ch - 48;
//         ch = nc();
//     }
//     return x * f;
// }
// const int maxn = 2e5 + 105;
// int tree[maxn];
// int m, n;
// void renew(int x,int k){//更改
//     for (; x <= n;x+=(x&-x))
//         tree[x] += k;
// }
// int cal(int x){//前缀和
//     int t = 0;
//     for (; x;x-=(x&-x))
//         t += tree[x];
//     return t;
// }
// void init(){
//     for (int i = 0; i <= n;i++){
//         tree[i] = 0;
//     }
// }
// void solve(){
//     n=read();
//     init();
//     vector<int> a, b;
//     for (int i = 1; i <= n;i++){
//         int x=read();
//         a.push_back(x);
//     }
//     b = a;
//     sort(b.begin(), b.end());
//     b.erase(unique(b.begin(), b.end()), b.end());
//     for(auto &it:a){
//         it = lower_bound(b.begin(), b.end(), it) - b.begin() + 1;

//     }
//     renew(a[0], 1);
//     ll ans = 0;
//     for (int i = 1; i <= n - 1;i++){
//         int c = cal(a[i] - 1), d = cal(n) - cal(a[i]);
//         ans += min(c, d);
//         renew(a[i], 1);
//     }
//     cout << ans << endl;
// }
// int main(){
//     ios::sync_with_stdio(0);
//     int t=read();
//     while (t--)
//     {
//         solve();
//     }
    
//     return 0;
// }

// //F
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define INF 0x3f3f3f3f
// #define rep(i, x, y) for(int i = x; i <= y;i++)
// #define dec(i, x, y) for(int i = x; i >= y;i--)

// char *p1, *p2, buf[100000];
// #define nc() (p1==p2 && (p2=(p1=buf)+fread(buf,1,10000,stdin),p1==p2)?EOF:*p1++)
// int read(){
//     int x = 0, f = 1;
//     char ch = nc();
//     while(ch<48|ch>57){
//         if(ch=='-')
//             f = -1;
//         ch = nc();
//     }
//     while(ch>=48&&ch<=57){
//         x = x * 10 + ch - 48;
//         ch = nc();
//     }
//     return x * f;
// }
// const int maxn = 1e6 + 20;
// vector<int> node[maxn];
// int n, d;
// int a[maxn], dis[maxn];
// priority_queue<pair<int, int>> heap;

// void init(){
//     rep(i, 0, n) node[i].clear();
//     rep(i, 0, n) dis[i] = INF;
//     while(heap.size())
//         heap.pop();
// }
// void solve(){
//     n = read();
//     d = read();
//     init();
//     rep(i,0,n-1){
//         a[i] = read();
//     }
//     rep(i,0,n-1){
//         if(a[i]==0){
//             dis[i] = 0;
//             heap.push({0, i});
//         }
//     }
//     while(heap.size()){
//         int x = heap.top().second;
//         heap.pop();
//         if(dis[x]+1<dis[(x+d)%n]){
//             dis[(x + d) % n] = dis[x] + 1;
//             heap.push({-dis[(x + d) % n], (x + d) % n});
//         }
//     }
//     int mx = 0;
//     rep(i,0,n-1){
//         mx = max(mx, dis[i]);
//     }
//     if(mx==INF)
//         cout << -1 << "\n";
//     else
//         cout << mx << "\n";
// }
// int main(){
//     ios::sync_with_stdio(0);
//     int t=read();
//     while (t--)
//     {
//         solve();
//     }
    
//     return 0;
// }

// G
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define INF 0x3f3f3f3f
// #define rep(i, x, y) for(int i = x; i <= y;i++)
// #define dec(i, x, y) for(int i = x; i >= y;i--)
 
// char *p1, *p2, buf[100000];
// #define nc() (p1==p2 && (p2=(p1=buf)+fread(buf,1,10000,stdin),p1==p2)?EOF:*p1++)
// int read(){
//     int x = 0, f = 1;
//     char ch = nc();
//     while(ch<48|ch>57){
//         if(ch=='-')
//             f = -1;
//         ch = nc();
//     }
//     while(ch>=48&&ch<=57){
//         x = x * 10 + ch - 48;
//         ch = nc();
//     }
//     return x * f;
// }
// const int maxn = 2105;
// int n;
// int dp[10005][maxn];
// int a[10005];
// void init(){
//     rep(i, 0, n) rep(j, 0, maxn - 1) dp[i][j] = INF;
// }
// void solve(){
//     n = read();
//     init();
//     rep(i, 1, n) a[i] = read();
//     dp[0][0] = 1;
//     rep(i,1,n)rep(k,0,2000){
//         if(dp[i-1][k]==INF)
//             continue;
//         if(k+a[i]<=2000)
//             dp[i][k + a[i]] = min(dp[i][k + a[i]], max(dp[i - 1][k], k + a[i]));
//         if(k-a[i]>=0)
//             dp[i][k - a[i]] = min(dp[i][k - a[i]], dp[i - 1][k]);
//         else
//             dp[i][0] = min(dp[i][0], dp[i - 1][k] + a[i] - k);
//     }
//     int mn = INF;
//     rep(i, 0, 2000) mn = min(mn, dp[n][i]);
//     cout << mn << "\n";
    
//     // n=read();
//     // for(int i=1;i<=n;i++) a[i]=read();
//     // for(int i=0;i<=n;i++)
//     // for(int j=0;j<=2000;j++) dp[i][j]=1e9;
//     // dp[0][0]=1;
//     // for(int i=1;i<=n;i++)
//     // for(int j=0;j<=2000;j++){
//     //     if(j+a[i]<=2000) dp[i][j+a[i]]=min(dp[i][j+a[i]],max(dp[i-1][j],j+a[i]));
//     //     if(j-a[i]>=0) dp[i][j-a[i]]=min(dp[i][j-a[i]],dp[i-1][j]);
//     //     else dp[i][0]=min(dp[i][0],dp[i-1][j]+a[i]-j);
//     // }
//     // int Ans=1e9;
//     // for(int i=0;i<=2000;i++) Ans=min(Ans,dp[n][i]);
//     // printf("%d\n",Ans);
// }
// int main(){
//     ios::sync_with_stdio(0);
//     int t=read();
//     while (t--){
//         solve();
//     } 
//     return 0;
// }