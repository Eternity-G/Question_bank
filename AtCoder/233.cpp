// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // typedef long double ld;
// // typedef pair<int,int> pii;

// // const int inf=0x3f3f3f3f;
// // const int maxn=1e6+5;
// // void solve(){
// //     int a, b;
// //     cin >> a >> b;
// //     if(b-a<=0)
// //         cout << "0";
// //     else{
// //         cout << (int)ceil((b - a)*1.0 / 10);
// //     }
// // }

// // int main(){
// //     ios::sync_with_stdio(0);
// //     int t;
// //     t = 1;
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
// void solve(){
//     int a, b;
//     cin >> a >> b;
//     string s;
//     cin >> s;

//     for (int i = 0; i < a-1;i++){
//         cout << s[i];
//     }
//     for (int i = b-1; i >= a-1;i--){
//         cout << s[i];
//     }
//     for (int i = b ; i < s.size(); i++)
//     {
//         cout << s[i];
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     t = 1;
//     while(t--)solve();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int inf=0x3f3f3f3f;
const int maxn=2e5+5;
vector<int> ve[maxn];
ll n, k, res;
void dfs(ll u,ll sum){
    if(u==n){
        if(sum==k)
            res++;
        return;
    }
    for (int i = 0; i < ve[u].size();i++){
        if(sum*ve[u][i]<=k)
            dfs(u + 1, sum * ve[u][i]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    int cnt;
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        cin >> cnt;
        for (int j = 0; j < cnt;j++){
            int x;
            cin >> x;
            ve[i].push_back(x);
        }
    }
    dfs(0, 1);
    cout << res << endl;
    return 0;
}
