
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	ios::sync_with_stdio(0);
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		long long n,h;
// 		cin >> n >> h;
// 		long long a[1005] = {0};
// 		for (int i = 0; i < n;i++){
// 			cin >> a[i];
// 		}
// 		sort(a, a + n);
// 		long long a1 = a[n - 1];
// 		long long a2 = a[n - 2];
// 		long long cnt = h;
// 		long long k = 0;
// 		while(cnt>0){
// 			if(k%2==0){
// 				cnt -= a1;
// 			}else{
// 				cnt -= a2;
// 			}
// 			k++;
// 		}
// 		cout << k << endl;
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n);
//     for (auto &t : a)
//         cin >> t;
//     vector<int> b = a;
//     sort(b.begin(), b.end());
//     for (int i = n - x; i < x; i++)
//         if (a[i] != b[i])
//         {
//             cout << "NO\n";
//             return;
//         }
//   cout << "YES\n";
// }
// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5+5;
// vector<int> g[N];
// int t,n,m,a[N],x;
// int cnt=0;
// int dfs(int v,int fa){
//     int now = a[v];
//     for(auto u:g[v]){
//         if(u==fa)continue;
//         now^=dfs(u,v);
//     }
//     if(now==x)cnt++,now=0;
//     return now;
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin>>t;
//     while (t--){
//         cin>>n>>m;
//         x=0;cnt=0;
//         bool f=1;
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//             x^=a[i];
//             g[i].clear();
//         }
//         for(int i=1,u,v;i<n;i++){
//             cin>>u>>v;
//             g[u].push_back(v);
//             g[v].push_back(u);
//         }
//         if(x==0){
//             printf("YES\n");
//         }else {
//             if(dfs(1,1)||cnt==1)f=0;
//             if(f&&m>=3){
//                 printf("YES\n");
//             }else{
//                 printf("NO\n");
//             }
//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;
const int N=3010;
int v[N],cnt;
vector<int> h[N],q;
void dfs(int u,int fa)
{
    for(auto j:h[u])
    {
        if(j==fa)continue;
        v[++cnt]=j;
        dfs(j,u);
        v[++cnt]=u;
    }
}
int query()
{
    sort(q.begin(),q.end());
    q.erase(unique(q.begin(),q.end()),q.end());
    cout<<'?'<<' '<<q.size()<<' ';
    for(int i=0;i<q.size();i++)cout<<q[i]<<' ';
    cout<<endl;
    q.clear();
    int res;
    cin>>res;
    return res;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        h[a].push_back(b);
        h[b].push_back(a);
    }
    v[++cnt]=1;
    dfs(1,0);
    for(int i=1;i<=n;i++)q.push_back(i);
    int maxv=query();
    int l=1,r=cnt;
    while(l+1<r)
    {
        int mid=l+r>>1;
        for(int i=1;i<=mid;i++)q.push_back(v[i]);
        if(query()==maxv)r=mid;
        else l=mid;
    }
    cout<<'!'<<' '<<v[l]<<' '<<v[r];
	return 0;
}
