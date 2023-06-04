// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // typedef long double ld;
// // typedef pair<int,int> pii;

// // const int inf=0x3f3f3f3f;
// // const int maxn=1e6+5;
// // void solve(){
// //     int a[3] = {0};
// //     for (int i = 0; i < 3;i++){
// //         cin >> a[i];
// //     }
// //     sort(a, a + 3);
// //     if((a[0]+a[1])==a[2]){
// //         cout << "yes\n";
// //     }else if(a[0]==a[1]&&a[2]%2==0){
// //         cout << "yes\n";
// //     }else if(a[1]==a[2]&&a[0]%2==0){
// //         cout << "yes\n";
// //     }else
// //         cout << "NO\n";
// // }

// // int main(){
// //     ios::sync_with_stdio(0);
// //     int t;
// //     cin>>t;
// //     while(t--)solve();
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// struct node{
//     int data, vis, flag;
// };
// bool cmp(node a,node b){
//     if(a.flag!=b.flag)
//         return a.flag < b.flag;
//     else
//         return a.data < b.data;
// }
// void solve(){
//     int n;
//     cin >> n;
//     vector<node> a(n+1);
//     vector<int> b(n+1);
//     for (int i = 1; i <= n;i++){
//         cin >> a[i].data;
//         a[i].vis = i;
//     }
//     string s;
//     cin >> s;
//     for (int i = 0; i < s.size();i++){
//         if(s[i]=='1'){
//             a[i+1].flag = 1;
//         }
//     }
//     sort(a.begin(), a.end(), cmp);
//     for (int i = n ; i > 0;i--){
//         b[a[i].vis] = i;
//     }
//     for (int i = 1;i<=n;i++){
//         cout << b[i] << " ";
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)solve();
//     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;

// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5 + 5;
// void solve()
// {
//     ll n, k;
//     cin >> n >> k;
//     ll a[maxn] = {0};
//     ll sum = 0;
//     ll cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         sum += a[i];
//     }
//     sort(a, a + n);
//     if (sum <= k)
//         cout << 0 << endl;
//     else
//     {
//         // ll cnta = 0;
//         // ll suma = sum;
//         // ll sumb = sum;
//         // for (int i = 0; i < n; i++)
//         // {
//         //     if (a[i] != a[0])
//         //         cnta++;
//         // }
//         // ll num = 0;
//         // if(a[0]-cnta/2<0){
//         //     num += cnta;
//         //     for (int i = 0; i < (cnta+1) / 2;i++){
//         //         suma -= (a[n - 1 + i] + a[0] + cnta / 2);
//         //     }
//         // }
//         // while (suma > k)
//         // {
//         //     suma--;
//         //     cnta++;
//         // }
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (a[i] == a[0])
//                 break;
//             sum -= (a[i] - a[0]);
//             cnt++;
//             if (sum <= k)
//             {
//                 break;
//             }
//         }
//         while (sum > k)
//         {
//             sum--;
//             cnt++;
//         }
//         cout << cnt << endl;
//     }
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


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int inf=0x3f3f3f3f;
const int maxn=2e5+5;
void solve(){
    int n;
    ll k;
    cin >> n >> k;
    int a[maxn] = {0};
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ll s = 0, S = 0;
    for (int i = 1;i<=n;i++){
        S += a[i];
    }
    ll ans = max(0LL, S - k);
    for (int i = n; i >= 2;i--){
        s += a[i];
        ll x = (k - (S - s - a[1])) / (n - i + 2);
        while((S-a[1]-s+x+(n-i+1)*x>k))
            --x;
        ans = min(ans, n - i + 1 + max(a[1] - x, 0LL));
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
