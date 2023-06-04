// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     int n;
//     cin >> n;
//     if(n>=0&&n<40)
//         cout << 40 - n;
//     else if(n<70)
//         cout << 70 - n;
//     else if(n<90)
//         cout << 90 - n;
//     else
//         cout << "expert";
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     string s1, s2, s3, s4;
//     cin >> s1;
//     cin >> s2;
//     cin >> s3;
//     cin >> s4;
//     int n = s4.length();
//     for (int i = 0; i < n;i++){
//         int m = s4[i] - '0';
//         if(m==1)
//             cout << s1;
//         else if(m==2)
//             cout << s2;
//         else if(m==3)
//             cout << s3;
//     }
//         return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<string> q;
// string s;

// bool cmp(string s1,string s2){
//     int w=0;
//     for (int i = 0; i < 26;i++){
//         if(s[i]==s1[w]&&s[i]!=s2[w]){
//             return s1>s2;
//         }else if(s[i]!=s1[w]&&s[i]==s2[w]){
//             return s1<s2;
//         }else if(s[i]==s1[w]&&s[i]==s2[w]){
//             w++;
//         }
//     }
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin >> s;
//     int n, n1;
//     cin >> n;
//     n1 = n;
//     while(n1--){
//         string s1;
//         cin >> s1;
//         q.push_back(s1);
//     }
//     sort(q.begin(),q.end(), cmp);
//     for (int i = 0; i < n; i++)
//     {
//         cout << q[i] << "\n";
//     }
//     return 0;
// }

// #include<cstdio>
// #include<queue>
// #include<set>
// #include<cstdlib>
// #include<string.h>
// #include<string>
// #include<iostream>
// #include<cmath>
// #include<unordered_map>
// #include<map>
// #include<algorithm>
// #define endl "\n"
// #define IOS ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
// #define ft first
// #define sd second
// #define pll pair<ll, ll>
// #define pii pair<int, int>
// #define ll long long int
// #define ull unsigned long long int
// #define mt(a,b) memset(a, b, sizeof a)
// //#define int long long
// const double PI = acos(-1.0);
// const int inf = 0x3f3f3f3f;
// const int INF = 0x7fffffff;
// using namespace std;
// const int N = 2e5 + 7, M = 1e6 + 10;
// string s[N];
// int mp[30];
// bool cmp(string a, string b)
// {
// 	int n = a.size(), m = b.size();
// 	for (int i = 0; i < n && i < m; i++)
// 	{
// 		if (a[i] == b[i]) continue;
// 		return mp[a[i] - 'a'] < mp[b[i] - 'a'];
// 	}
// 	return n < m;
// }

// int main()
// {

// 	for (int i = 0; i < 26; i++)
// 	{
// 		char ch; cin >> ch;
// 		mp[ch - 'a'] = i;
// 	}

// 	int n; cin >> n;
// 	for (int i = 0; i < n; i++) cin >> s[i];
// 	sort(s, s + n, cmp);

// 	for (int i = 0; i < n; i++)
// 		cout << s[i] << endl;


// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 2e5 + 7, M = 1e6 + 10;
// string s[N];
// int mp[30];
// bool cmp(string a, string b){
// 	int n = a.size(), m = b.size();
// 	for (int i = 0; i < n && i < m; i++){
// 		if (a[i] == b[i])
//             continue;
//         return mp[a[i] - 'a'] < mp[b[i] - 'a'];
// 	}
// 	return n < m;
// }

// int main(){
// 	for (int i = 0; i < 26; i++){
// 		char ch;
//         cin >> ch;
// 		mp[ch - 'a'] = i;
// 	}
// 	int n;
//     cin >> n;
// 	for (int i = 0; i < n; i++)
//         cin >> s[i];
//     sort(s, s + n, cmp);
// 	for (int i = 0; i < n; i++)
// 		cout << s[i] << endl;
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     int n;
//     cin>>n;
//     int x,y;
//     cin>>x>>y;
//     vector<pair<int,int>>v(n);
//     for(auto & p : v){
//         cin>>p.first>>p.second;
//     }
//     int INF = 1e6;
//     vector<vector<int>>dp(x+1, vector<int>(y+1, INF));
//     dp[0][0] = 0;
//     for(pair<int,int> p : v){
//         for(int i = x; i >=0; i--){
//             for(int j = y; j >=0; j--){
//                 int f = min(p.first + i, x);
//                 int s = min(p.second + j, y);
//                 dp[f][s] = min(dp[i][j]+1, dp[f][s]);
//             }
//         }
//     }
 
//     if(dp[x][y] >= INF){
//         cout<<-1;
//     }
//     else{
//         cout<<dp[x][y];
//     }
// }
// int main() {
//     // insert code here...
//     solve();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int val[30];
// string s;
// string a[50005];
// bool cmp(string &x,string &y){
//     int mn = min(x.size(), y.size());
//     for (int i = 0; i < mn;i++){
//         if(x[i]==y[i])
//             continue;
//         return val[x[i] - 'a'] < val[y[i] - 'a'];
//     }
//     return x.size() < y.size();
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin >> s;
//     for (int i = 0; i < 26;i++){
//         val[s[i] - 'a'] = i;
//     }
//     int n;
//     cin >> n;
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     sort(a, a + n, cmp);
//     for (int i = 0; i < n;i++){
//         cout << a[i] << "\n";
//     }
//         return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define rep(i, x, y) for (int i = x; i <= y; i++)
#define dec(i, x, y) for (int i = x; i >= y; i--)
#define ll long long 
#define INF 0x3f3f3f3f

char *p1, *p2,buf[100000];
#define nc() (p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 100000, stdin), p1 == p2) ? EOF : *p1++)
int read(){
    int x = 0, f = 1;
    char ch = nc();
    while (ch<48|ch>57){
        if(ch=='-')
            f = -1;
        ch = nc();
    }
    while(ch>=48&&ch<=57){
        x = x * 10 + ch - 48;
        ch = nc();
    }
    return x * f;
}

const int maxn = 105;
int n = 4, p;
int a[maxn][maxn], b[maxn][maxn], vis[maxn][maxn];
int dx[] = {0, 1, -1, 0};
int dy[] = {1, 0, 0, -1};
void dfs(int x,int y){
    if(x<1||y<1||x>4||y>4)
        return;
    if(b[x][y]==0||vis[x][y])
        return;
    vis[x][y] = 1;
    for (int i = 0; i < 4;i++){
        dfs(x + dx[i], y + dy[i]);
    }
}
bool dfs2(int x,int y){
    if(x<1||y<1||x>4||y>4)
        return 1;
    if(b[x][y]==1||vis[x][y])
        return 0;
    vis[x][y] = 1;
    bool ret = 0;
    for (int i = 0; i < 4;i++){
        ret |= dfs2(x + dx[i], y + dy[i]);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    n = 4;
    rep(i, 1, n) 
        rep(j, 1, n)
            a[i][j] = read();
    int cnt = 0;
    rep(val, 1, (1 << 16) - 1){
        int ok = 1, color = 0;
        rep(j, 0, 15) b[j / 4 + 1][j % 4 + 1] = min(1, ((val) & (1 << j)));
        rep(i, 1, 4) rep(j, 1, 4) vis[i][j] = 0;
        rep(i, 1, 4) rep(j, 1, 4) if (ok){
            if(b[i][j]==0&&!vis[i][j])
                ok = dfs2(i, j);
            if(a[i][j]&&(b[i][j]==0))
                ok = 0;
            if(b[i][j]==1){
                if(color&&!vis[i][j])
                    ok = 0;
                else if(!color&&!vis[i][j]){
                    dfs(i, j);
                    color = 1;
                }
            }
        }
        cnt += ok;
    }
    cout << cnt << endl;
    return 0;
}