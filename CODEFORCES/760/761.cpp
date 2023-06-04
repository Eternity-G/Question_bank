// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     string s, t, s1;
//     cin >> s;
//     cin >> t;
//     sort(s.begin(), s.end());
//     int a[5]={0};
//     for (int i = 0; i < s.length();i++){
//         if(s[i]=='a')
//             a[0]++;
//         if(s[i]=='b')
//             a[1]++;
//         if(s[i]=='c')
//             a[2]++;
//     }
//     if(a[0]&&a[1]&&a[2]&&t=="abc"){
//         for (int i = 0; i < a[0];i++)
//             cout << "a";
//         for (int i = 0; i < a[2];i++)
//             cout << "c";
//         for (int i = 0; i < a[1];i++)
//             cout << 'b';
//        // cout << "!";
//         cout << s.substr(a[0] + a[1] + a[2]) << endl;
//     }else{
//         cout << s << endl;
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t ;
//     while(t--){
//          solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;

// const int maxn = 1e6 + 5;
// ll gcd(ll a, ll b){
//     return a % b == 0 ? b : gcd(b, a % b);
// }
// void solve(){
//     ll n, i;
//     cin >> n;
//     if (n % 2 == 0){
//         cout << (n - 1) / 2 << " " << (n - 1) / 2 + 1 << " " << 1 << endl;
//     }
//     else{
//         if ((n - 1) / 2 % 2 == 0){
//             cout << (n - 1) / 2 - 1 << " " << (n - 1) / 2 + 1 << " " << 1 << endl;
//         }
//         else{
//             cout << (n - 1) / 2 - 2 << " " << (n - 1) / 2 + 2 << " " << 1 << endl;
//         }
//     }
//     //cout << 1 << " " << n - 2 << " " << 1 << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int N=1e6+5;
int n,tot;
int a[N],ocr[N];
void solve(){
    cin >>n;
    for (int i=1;i<=n;i++) ocr[i]=0;
    tot=0;
    for (int i=1,t;i<=n;i++){
        cin >>t;
        if (t<=n&&!ocr[t]) ocr[t]=1;
        else a[tot++]=(t-1)/2;
    }
    int ans=tot;
    sort(a,a+tot);
    for (int i=n;i>=1;i--){
        if (ocr[i]) continue;
        else {
            if (a[--tot]<i){
                cout <<"-1\n";
                return;
            }
        }
    }
    cout <<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t ;
    while(t--){
         solve();
    }
    return 0;
}
