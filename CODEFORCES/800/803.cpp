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
// void solve(){
//     int n;
//     cin >> n;
//     vi a(n);
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     for (int i = 0; i < n;i++){
//         int x = a[i];
//         int flag = 0;
//         //cout << x << nl;
//         for (int j = 0; j < n;j++){
//             if(!flag)
//                 x = a[j], flag = 1;
//             else
//                 if(i!=j)
//                     x ^= a[j];
//             //cout << x << " ";
//         }
//         // cout << nl << a[i] << " " << x << nl;
//         // cout << "\n";
//         if(a[i]==x){
//             cout << x << nl;
//             break;
//         }
//     }
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     //freopen("in", "r", stdin);
//     int t = 1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }


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
// void solve(){
//     int n, k;
//     cin >> n >> k;
//     vi a(n+3);
//     vi b;
//     for (int i = 1; i <= n;i++)
//         cin >> a[i];
//     a[n + 1] = 0;
//     a[0] = 0;
//     for (int i = 1; i <= n;i++){
//         if(a[i]>a[i-1]+a[i+1]){
//             b.push_back(i);
//         }
//     }
//     int cnt = b.size();   
//     if(k==1&&cnt){
//         if(b[0]>k)
//             if(b[0]%2==0)
//                 cnt += (b[0] - 1) / 2;
//             else
//                 cnt += b[0] / 2;
//         if(n-b[0]>k)
//             if((n-b[0])%2==0)
//                 cnt += (n - b[0] - 1) / 2;
//             else
//                 cnt += b[0] / 2;
//     }
//     cout << cnt << nl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//    // freopen("in", "r", stdin);
//     int t = 1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }



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
// void solve(){
//     int n;
//     cin >> n;
//     vll a(n);
//     map<ll, int> mp;
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//         mp[a[i]]++;
//     }
//     // int falg = 0;
//     // for (int i = 0; i < n-2;i++){
//     //     ll sum = a[i] + a[i + 1] + a[i + 2];
//     //     if(!mp[sum]){
//     //         cout << "no\n";
//     //         falg = 1;
//     //         break;
//     //     }
//     // }
//     // if(!falg)
//     //     cout << "yes\n";
//     sort(a.begin(), a.end());
//     for (int i = 0; i < n - 2; i++) {
//         if (i > 0 && a[i] == a[i - 1]) continue; //当前数字和前一个数字相等，跳过
//         int j = i + 1, k = n - 1;
//         while (j < k) {
//             int sum = a[j] + a[k] + a[i];
//             if (mp[sum]) {
//                 while (j < k && a[j] == a[j + 1]) j++;//跳过右侧所有相等的数
//                 j++; 
//                 while (j < k && a[k] == a[k - 1]) k--;//跳过左侧所有相等的数
//                 k--;
//             }
//             else{
//                 cout << "no\n";
//                 return;
//             }
//         }
//     }
//     cout << "yes\n";
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     //freopen("in", "r", stdin);
//     int t = 1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }


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
// void solve(){
//     int n,k;
//     vi a(n+1);
//     cin >> n >> k;
//     for(int i=1;i<=n;++i){
//         cin>>a[i];
//     }
//     if(k==1){
//         cout << (n + 1 >> 1) - 1 << nl;
//         return;
//     }
//     int cnt = 0;
//     for(int i=2;i<n;++i){
//         if(a[i]>a[i-1]+a[i+1])
//             ++cnt;
//     }
//     cout << cnt << nl;
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     //freopen("in", "r", stdin);
//     int t = 1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }


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
// void solve(){
//     int n;
//     cin >> n;
//     vll a;
//     map<ll, int> mp;
//     int xmax0 = 0, xmin0 = 0, xequal0 = 0;
//     for (int i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         if(x>0){
//             xmax0++;
//             a.push_back(x);
//         }else if(x<0){
//             xmin0++;
//             a.push_back(x);
//         }else{
//             xequal0++;
//         }
//     }
//     for (int i = 0; i < min(3, xequal0);i++)
//         a.push_back(0);
//     if(xmax0>=3||xmin0>=3){
//         cout << "no\n";
//         return;
//     }
//     for (int i:a){
//         mp[i] = 1;
//     }
//     n = a.size();
//     for (int i = 0; i < n - 2; i++)
//     {
//         for (int j = i + 1; j < n - 1; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (mp[a[i] + a[j] + a[k]] == 0)
//                 {
//                     cout << "no\n";
//                     return;
//                 }
//             }
//         }
//         }
//     cout << "yes\n";
// }

// int main(){
//     //ios::sync_with_stdio(0);
//     //freopen("in", "r", stdin);
//     int t = 1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }
