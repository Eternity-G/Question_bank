// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // typedef long double ld;
// // typedef pair<int,int> pii;

// // const int maxn=1e6+5;

// // int main(){
// //     ios::sync_with_stdio(0);
// //     char a[4][4] = {0};
// //     int n = 2;
// //     for (int i = 0; i < n;i++){
// //         for (int j = 0; j < n;j++){
// //             cin >> a[i][j];
// //         }
// //     }
// //     int vis[3][3] = {0};
// //     for (int i = 0; i < n;i++){
// //         for (int j = 0; j < n;j++){
// //             if(a[i][j]=='#')
// //                 vis[i][j] = 1;
// //         }
// //     }
// //     int flag = 0;
// //     for (int i = 0; i < n;i++){
// //         int sum = 0;
// //         for (int j = 0; j < n;j++){
// //             sum += vis[i][j];
// //         }
// //         //cout << sum << endl;
// //         if(sum>1){
// //             flag = 1;
// //         }
// //     }
// //     for (int i = 0; i < n;i++){
// //         int sum = 0;
// //         for (int j = 0; j < n;j++){
// //             sum += vis[j][i];
// //         }
// //         //cout << sum << endl;
// //         if(sum>1){
// //             flag = 1;
// //         }
// //     }
// //     if(!flag)
// //         cout << "No" << endl;
// //     else
// //         cout << "Yes" << endl;
// //     return 0;
// // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // typedef long double ld;
// // typedef pair<int,int> pii;

// // const int maxn=1e6+5;
// // void solve(){
// //     string a, b;
// //     int flag = 0;
// //     cin>>a>>b;
// //     for (int i = 0; i < min(a.size() , b.size());i++){
// //         if(a[a.size()-1-i]-'0'+b[b.size()-1-i]-'0'>=10)
// //             flag = 1;
// //     }
// //     if(flag)
// //         cout << "Hard";
// //     else
// //         cout << "Easy";
// // }

// // int main(){
// //     ios::sync_with_stdio(0);
// //         solve();
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // #define ll long long
// // using namespace std;
// // ll n, w, ans;
// // const int maxn=1e6+10;
// // void solve(){
// // 	cin>>n>>w;
// // 	pair< ll,ll > a[maxn];
// // 	for(int i=1;i<=n;i++){
// // 		cin>>a[i].first>>a[i].second;
// // 	}
// // 	sort(a+1,a+n+1);
// // 	for(int i=n;i>=1;i--){
// // 		ans+=a[i].first*min(a[i].second,w);
// // 		w-=min(w,a[i].second);
// // 	} 
// // 	cout<<ans;
// // }
// // int main(){
// // 	solve();
// // 	return 0;
// // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // typedef long double ld;
// // typedef pair<int,int> pii;

// // const int maxn=1e6+5;
// // void solve(){
// //     string s;
// //     cin>>s;
// //     int n = s.size();
// //     int k;
// //     cin >> k;
// //     int r = 0, cur = 0, ans = 0;
// //     for (int i = 0; i < n;i++){
// //         while(r<n&&s[r]=='X'||(s[r]=='.'&&cur+1<=k)){
// //             cur+=(s[r]=='.');
// //             r++;
// //         }
// //         ans = max(ans, r - i);
// //         cur -= (s[i] == '.');
// //     }
// //     cout << ans << endl;
// // }

// // int main(){
// //     ios::sync_with_stdio(0);
// //      solve();
    
// //     return 0;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;

// // const int maxn = 1050;
// // int s[maxn + 1];
// // void init(){
// //     for (int i = 1; i <= maxn;i++){
// //         s[i] = i;
// //     }
// // }
// // int find(int x){
// //     return x == s[x] ? x : find(s[x]);
// // }   
// // void common(int x,int y){
// //     x = find(x);
// //     y = find(y);
// //     if(x!=y)
// //         s[x] = s[y];
// // }
// // int main(){
// //     int t, n, m, x, y;
// //     cin >> t;
// //     while(t--){
// //         cin >> n >> m;
// //         init();
// //         for (int i = 1; i <= m;i++){
// //             cin >> x >> y;
// //             common(x, y);
// //         }
// //         int ans = 0;
// //         for (int i = 1; i <= n;i++){
// //             if(s[i]==i)
// //                 ans++;
// //         }
// //         cout << ans << endl;
// //     }
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char a[18],b[18];
//     cin>>a>>b;


//     int len1=strlen(a);
//     int len2=strlen(b);

//     int j,k;
//     int flag=0;
//     for(j=len1-1,k=len2-1;k>=0&&j>=0;j--,k--)
//     {

//         if((int)(a[j]-'0')+(int)(b[k]-'0')>=10)
//         {
//             //cout<<"hard";
//             flag++;
//             //return 0;
//         }

//     }
//     if(flag){
//         cout<<"Hard";
//     }
//     else{
//         cout<<"Easy";
//     }

// }g
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn=1e8+5;
void solve(){
    int a[maxn];
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


