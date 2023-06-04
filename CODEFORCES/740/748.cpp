// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve(){
//     ll a[3];
//     ll maxn = -1;
//     int flag = 1;
//     for (int i = 0; i < 3;i++){
//         cin >> a[i];
//     }
//     int cnt = 0;
//     ll d = max(a[0], max(a[1], a[2]));
//     for (int i = 0; i < 3;i++){
//         if(a[i]==d)
//             cnt++;
//         if(cnt>=2)
//             flag = 0;
//     }

//         for (int i = 0; i < 3; i++)
//         {
//             if (a[i] == d && flag)
//                 cout << 0;
//             else if (!flag && a[i] == d)
//                 cout << 1;
//             else
//                 cout << d - a[i] + 1;
//             cout << " ";
//             if (i == 2)
//                 cout << endl;
//         }
// }
// int main(){
//     ios::sync_with_stdio(0);
//     ll t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k;
    cin >> n >> k;
    int a[400010];
    for (ll i = 0; i < k;i++){
        cin >> a[i];
    }
    sort(a, a + k);
    ll num = 0, cnt = 0;
    for (int i = k - 1; i >= 0;i--){
        if(num>=n-1||num>=a[i])
            break;
		num += n - a[i];
        cnt++;
    }
    cout << cnt << endl;
}
int main(){
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
