// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// typedef vector<int> vi;
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int a, b, c, x, y;
//     cin >> a >> b >> c >> x >> y;
//     int l1 = a - x;
//     int l2 = b - y;
//     if(l1>=0&&l2>=0){
//         cout << "yes\n";
//     }else if(l1<0&&l2>=0){
//         if(abs(l1)<=c)
//             cout << "yes\n";
//         else
//             cout << "no\n";
//     }else if(l1>=0&&l2<0){
//         if(abs(l2)<=c)
//             cout << "yes\n";
//         else
//             cout << "no\n";
//     }else{
//         if(abs(l1)+abs(l2)<=c)
//             cout << "yes\n";
//         else
//             cout << "no\n";
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
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
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int n;
//     cin >> n;
//     ll a[100] = {0};
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }
//     int maxx = inf;
//     int cnt = 0;
//     int flag = 0;
//     for (int i = n - 2; i >= 0;i--){
//         while(a[i] && a[i] >= a[i+1]){
//             a[i] >>= 1;
//             cnt++;
//         }
//         if(a[i]>=a[i+1])
//             flag = 1;
//     }
//     if(flag){
//         cout << "-1\n";
//     }else{
//         cout << cnt << nl;
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
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
// #define all(a) a.begin(), a.end()
// #define nl '\n'
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     if(s.size()==1||s[0]=='0'){
//         cout << "1\n";
//     }else{
//         char a[maxn] = {0};
//         a[0] = '1';
//         a[s.size()+1] = '0';
//         for (int i = 1; i <= s.size();i++){
//             a[i] = s[i-1];
//         }
//         int cnt = 0;
//         int qian;
//         int flag = 1;
//         int t;
//         for (int i = 1; i < s.size() + 2;i++){
//             if(a[i]=='?'){
//                 if(i!=1){
//                     cnt++;
//                     //cout <<"xiaobiao:" <<i << " ";
//                 }
//             }
//             else if(a[i]=='0'){
//                 if(i==(s.size()+1))
//                     t = cnt + 1;
//                 else
//                     t = cnt + 2;
//                 break;
//             }else if(a[i]=='1'){
//                 cnt = 0;
//             }
//         }
//         cout << t << nl;
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
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
#define all(a) a.begin(), a.end()
#define nl '\n'
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
int tree[maxn] = {0};//树
bool vis[maxn] = {0};//是否出现
int n;
int root = 0;//根节点；                                                                                                                                                                                                                    
void solve(){
    cin >> n;
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n;i++){
        cin>>tree[i];
        vis[tree[i]] = 1;
        if(tree[i]==i){
            root = i;
        }
    }
    vector<int> x;
    int cnt = 0;
    for (int i = 1; i <= n;i++){
        if(!vis[i]){
            x.push_back(i);
            cnt++;
        }
    }
    if(cnt==0){
        x.push_back(root);
        cnt++;
    }
    cout << cnt << nl;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < cnt;i++){
        int ans = x[i];
        vector<int> m;
        m.push_back(ans);
        vis[ans] = 1;
        while(ans!=root){
            ans = tree[ans];
            if(!vis[ans])
                m.push_back(ans);
            vis[ans] = 1;
        }
        cout << m.size() << endl;
        for (int j = m.size() - 1; j >= 0;j--)
        {
            cout << m[j] << " ";
        }
        cout << nl;
    }
    cout << nl;

}

int main(){
    ios::sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}