// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     int n = 7;
//     int a[100]={0};
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     for (int i = 0; i < 6;i++){
//         for (int j = 0; j < 6;j++){
//             for (int k = 0; k < 6;k++){
//                 if(i!=j&&j!=k&&i!=k&&(a[i]+a[j]+a[k]==a[6])){

                
//                     cout << a[i] <<" "<< a[j] <<" " << a[k]<<endl;
//                     return;
//                 }
//             }
//         }
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


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     int n;
//     cin >> n;
//     string a, b;
//     cin >> a;
//     string cnt=a;
//     for (int i = 1; i < n - 2;i++){
//         cin>>b;
//         if(a[1]==b[0])
//             cnt += b.substr(1);
//         else
//             cnt += b;
//         a = b;
//     }
//     while(cnt.size()<n)
//         cnt += "a";
//     cout << cnt << endl;
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

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn=1e6+5;
ll gcd(ll a, ll b){
    return a % b == 0 ? b : gcd(b, a % b);
}
int n;
bool check(int c,ll b,ll a[]){
    for (int i = c; i < n;i+=2){
        if(a[i]%b==0){
            return 0;
        }
    }
    return 1;
}
void solve()
{
    cin>>n;
    ll a1, b;
    ll a[105] = {0};
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    if (n >= 4){
        a1 = gcd(a[0], a[2]);
        b = gcd(a[1], a[3]);
    }else if(n==3){
        a1 = gcd(a[0], a[2]);
        b = a[1];
    }else{
        a1 = a[0];
        b = a[1];
    }
    for (int i = 4;i<n;i+=2){
        a1 = gcd(a1, a[i]);
        if(i+1<n)
            b = gcd(b, a[i + 1]);
    }
    if(check(0,b,a)){
        cout << b << endl;
    }else if(check(1,a1,a)){
        cout << a1 << endl;
    }else
        cout << 0 << endl;
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

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
const int maxn=1e6+5;
int a[maxn],b[maxn];
void solve(){
    int n, k;
    cin >> n >> k;
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    ll sum = 0;
    for (int i = 0; i < n-(2*k);i++)
        sum += a[i];
    int m = 0;
    for (int i = n - (2 * k); i < n;i++){
        b[m++] = a[i];
    }
    for (int i = 0; i < k;i++){
        sum += b[i] / b[i+k];
    }
        cout << sum << endl;
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
