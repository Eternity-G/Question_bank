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
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5+5;
// void solve(){
//     int a, b, c;
//     cin >> a >> b >> c;
//     if(a+b==c)
//         cout << "+" << nl;
//     else
//         cout << "-" << nl;
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
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5+5;
// void solve(){
//     int n;
//     cin >> n;
//     vi a(n);
//     int num1 = 0, num2 = 0;
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//         if(a[i]%2==0){
//             num1 += a[i];
//         }else{
//             //ji
//             num2 += a[i];
//         }
//     }
    
//     if(num1>num2){
//         cout << "Yes" << nl;
//     }else
//         cout << "no" << nl;
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
// const int inf = 0x3f3f3f3f;
// const int maxn = 2e5+5;
// void solve(){
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int x = 1;
//     for (int i = 0; i < n; i++){
//         for (int j = i + 1; j < n;j++){
//             if(s[j]==s[i]){
//                 //debug() << s[j] << " ";
//                 s[j] = x + '0';
//                 //debug() << s[j] << " ";
//             }
//         }
//         if(isalpha(s[i]))
//             s[i] = x + '0';
//         x = !x;
//     }
//     //cout << s << endl;
//     int flag = 1;
//     for (int i = 1;i<n;i++){
//         if((s[i-1]-'0') == (s[i]-'0')){
//             flag = 0;
//             break;
//         }
//     }
//     if(flag)
//         cout << "yes" << nl;
//     else
//         cout << "no" << nl;
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
const int inf = 0x3f3f3f3f;
const int maxn = 2e5+5;
void solve(){
    int n, q;
    cin >> n >> q;
    vi a(n), b(n+1);
    
    for (int i = 0; i < n;i++)
        cin >> a[i];
    b[1] = a[0];
    for (int i = 2;i<=n;i++){
        b[i] = b[i - 1] + a[i - 1];
    }
    while (q--)
    {
        int l, r, k;
        scanf("%d%d%d", &l, &r, &k);
        int cnt = 0;
        cnt = b[r] - b[l-1];
        //cout << cnt << nl;
        cnt = b[n] - cnt + (r - l + 1) * k;
        if (cnt % 2 == 0)
            cout << "no" << nl;
        else
            cout << "yes" << nl;
    }
}

int main(){
    // ios::sync_with_stdio(0);
    //freopen("in", "r", stdin);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
