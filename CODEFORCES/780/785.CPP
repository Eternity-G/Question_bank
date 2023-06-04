// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     int n = s.length();
//     if(n==1){//奇数个Bob一定赢
//         cout << "Bob " << s[0] - 'a' + 1 << "\n";
//         return;
//     }
//     int sum = 0;
//     for(auto i:s)       //所有字母值之和
//         sum += i - 'a' + 1;
//     if (n % 2 == 0)     //Alice把所有全删除掉
//         cout << "Alice " << sum << "\n";
//     else                //Alice把前n-1或者后n-1个字母删掉
//         cout << "Alice " << sum - 2 * min(s[0] - 'a' + 1, s[n - 1] - 'a' + 1) << "\n";
//         // sum=a+b;   a=sum=b;  a-b=sum-2*b;
// }
// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     int n = s.length();
//     set<char> c;
//     bool ok = true;
//     int k;
//     for(k=0;k<n;k++){
//         if(c.find(s[k])==c.end())
//         //若在set c 中找不到则 c.find(x) == c.end()
//             c.insert(s[k]);
//         else
//             break;
//     }
//     for(int i=k;i<n;i++){
//         if(s[i]!=s[i-k])
//             ok = false;
//     }
//     if(ok)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// const int N = 40004, M = 502;
// const ll MOD = 1000000007;
// ll dp[N][M];
// int reverse(int n){
//     int r=0;
//     while(n>0)
//     {
//         r=r*10+n%10;
//         n/=10;
//     }
//     return r;
// }
// bool palindrome(int n){
//     return (reverse(n)==n);
// }
// void solve(){
//     int n;
//     cin >> n;
//     cout << dp[n][M-1] << '\n';
// }
// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     vector<int> palin;
//     palin.push_back(0);
//     for(int i=1;i<2*N;i++){
//         if(palindrome(i))
//             palin.push_back(i);
//     }
//     for(int j=1;j<M;j++)
//         dp[0][j]=1;
//     for(int i=1;i<N;i++){
//         dp[i][0]=0;
//         for(int j=1;j<M;j++){
//             if(palin[j]<=i)
//                 dp[i][j]=(dp[i][j-1]+dp[i-palin[j]][j])%MOD;
//             else
//                 dp[i][j]=dp[i][j-1];
//         }
//     }
//     while(t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 5;
const ll MOD = 1000000007;
ll gcd(ll a, ll b)
{
    return a % b == 0 ? b : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    ll g = gcd(a, b);
    return (a * b) / g;
}
void solve()
{
    ll b, c, q, r, y, z;
    cin >> b >> q >> y;
    cin >> c >> r >> z;
    ll e = b + q * (y - 1);
    ll f = c + r * (z - 1);
    if (c < b || c > e || f < b || f > e || r % q != 0 || (c - b) % q != 0)
        cout << 0 << '\n';
    else if (c - r < b || f + r > e)
        cout << -1 << '\n';
    else
    {
        ll ans = 0;
        for (ll p = 1; p * p <= r; p++)
        {
            if (r % p == 0)
            {
                if (lcm(p, q) == r)
                {
                    ll a = ((r / p) * (r / p)) % MOD;
                    ans = (ans + a) % MOD;
                }
                if (p * p != r && lcm(r / p, q) == r)
                {
                    ll a = (p * p) % MOD;
                    ans = (ans + a) % MOD;
                }
            }
        }
        cout << ans << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
