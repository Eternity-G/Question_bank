// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int n;
//     cin >> n;
//     if(n<=1399){
//         cout << "Division 4\n";
//     }else if(n<=1599){
//         cout << "Division 3\n";
//     }else if(n<=1899){
//         cout << "Division 2\n";
//     }else{
//         cout << "Division 1\n";
//     }
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
// const int maxn=2e5+5;
// void solve(){
//     int n;
//     cin >> n;
//     int a[maxn] = {0};
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     int t = a[0];
//     int cnt = 1;
//     int flag = 1;
//     for (int i = 1; i < n; i++){
//         if(a[i]==t){
//             cnt++;
//             if(cnt>=3){
//                 cout << a[i] << "\n";
//                 flag = 0;
//                 break;
//             }
//         }else{
//             t = a[i];
//             cnt = 1;
//         }
//     }
//     if(flag){
//         cout << "-1\n";
//     }
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
//     int n;
//     cin >> n;
//     int a[100] = {0};
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     int flag1 = 1;//1奇数
//     int flag2 = 1;//2奇数
//     int flag = 1;//yes
//     if(n==2){
//         cout << "yes\n";
//     }else{
//         if(a[0]%2==0)
//             flag1 = 0;
//         if(a[1]%2==0)
//             flag2 = 0;
//         for (int i = 2; i < n;i+=2){
//             if(a[i]%2==0&&!flag1||(a[i]%2!=0&&flag1)){
//                 continue;
//             }else{
//                 flag = 0;
//                 break;
//             }
//         }
//         for (int i = 1; i < n;i+=2){
//             if(a[i]%2==0&&!flag2||(a[i]%2!=0&&flag2)){
//                 continue;
//             }else{
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag)
//             cout << "yes\n";
//         else
//             cout << "no\n";
//     }
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
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
// //    if(n==1){
// //        if(s[0]=='W')
// //            cout << "yes\n";
// //        else
// //            cout << "no\n";
// //    }else if(n==2){
// //        if(s=="RB"||s=="BR"){
// //            cout << "yes\n";
// //        }else
// //            cout << "no\n";
// //    }else {
//         int cnt1 = 0, cnt2 = 0, flag = 1;
//         for (int i = 0; i < n;i++){
//             if(s[i]=='W'){
//                 if((!cnt1&&cnt2)||(cnt1&&!cnt2)){
//                     cout << "no\n";
//                     flag = 0;
//                     return;
//                 }
//                 cnt1 = 0;
//                 cnt2 = 0;
//             }
//             else if(s[i]=='R')
//                 cnt1++;
//             else if(s[i]=='B')
//                 cnt2++;
//             if(i==n-1){
//                 if((!cnt1&&cnt2)||(cnt1&&!cnt2)){
//                     cout << "no\n";
//                     flag = 0;
//                 }
//             }
//         }
//         if(flag)
//             cout << "yes\n";
//    // }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
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
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int n;
//     cin >> n;
//     int a[maxn] = {0};
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     int sum1 = 0;
//     int sum2 = 0;
//     int ans = 0;
//     int l = 0, r = n - 1;
//     while(l < r){
//         if(sum1<sum2){
//             sum1 += a[l];
//             l++;
//         }else if(sum1>sum2){
//             sum2 += a[r];
//             r--;
//         }else{
//             ans = l + 1 + n - r;
//             l++;
//             r--;
//         }
//     }
//     cout << ans << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;
// const int inf = 0x3f3f3f3f;
// const int maxn = 1e6 + 5;

// ll n;
// string a[maxn];

// void solve()
// {
//     cin >> n;
//     map<string, ll> us;
//     map<ll, ll> used;
//     map<ll, ll> uss;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     ll ans = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         ans += (used[a[i][0]] - us[a[i]]);
//         ans += (uss[a[i][1]] - us[a[i]]);
//         us[a[i]]++;
//         used[a[i][0]]++;
//         uss[a[i][1]]++;
//     }
//     cout << ans << "\n";
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }
