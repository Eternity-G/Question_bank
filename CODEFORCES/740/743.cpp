#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum = 0, cnt = 0;
        for (int i = 0; i < n;i++){
            sum += s[i] - '0';
            if(s[i]-'0'!=0&&i!=n-1)
                cnt++;
        }
        sum = sum + cnt;
        cout << sum << "\n";
    }
    
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t;
    int vis[100][100]={0};
    cin>>t;
    while(t--){
        int n;
        cin >> n;//章节
        int flag1 = 0;
        for (int i = 0;i<n;i++){
            int m,l;
            cin >> m;
            if(m==0){
                for (int j = 0; j < n;j++){
                    vis[j][i] = 2;
                }
                continue;
            }
            for (int j = 0; j < m; j++){
                cin >> l;
                if(vis[i][l]!=2){
                    vis[i][l] = 1;
                    flag1 = 0;
                }
                    
            }
        }
        if(flag1){
            cout << 1 << "\n";
            continue;
        }
        int flag3 = 0;
        int cnt = 1, n1 = n;
        while(n1--){
            cnt++;
            for (int i = 0; i < n;i++){
                int flag = 1;
                for (int j = i; j < n;j++){
                    if(vis[i][j]==1)
                        flag = 0;
                }
                if(flag){
                    for (int j = 0; j < n;j++)
                        vis[j][i] = 2;
                } 
            }
            int flag2 = 1;
            for (int i = 0;i<n;i++)
                if(vis[0][i]!=2)
                    flag2 = 0;
            if(flag2)
                flag3 = 1;
                break;
        }
        if(flag3)
            cout << cnt << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
//#define int long long
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int inf = 2e18 + 100;
const int maxn = 2e5 + 100;
vector<int> g[maxn];
int d[maxn], in[maxn];
queue<int> q;
signed main()
{
	IOS
	int tt;
	cin>>tt;
	while(tt--){
		while(!q.empty())
            q.pop();
		int n;
		cin>>n;	
		int sum=n;
		for(int i=1;i<=n;i++)g[i].clear();
		memset(d,0,sizeof(int)*(n+10));	
		memset(in,0,sizeof(int)*(n+10));
		for(int i=1;i<=n;i++){
			int k;
			cin>>k;
			if(k==0){
				d[i]=1;
				q.push(i);
				sum--;
			}
			for(int j=1;j<=k;j++){
				int x;
				cin>>x;
				g[x].push_back(i);
				in[i]++;
			}
		}
		while(!q.empty()){
			int x=q.front();
			q.pop();
			for(auto it:g[x]){
				in[it]--;
				if(in[it]==0){
					q.push(it);
					sum--;
				}
				if(it>x){
					d[it]=max(d[it],d[x]);
				}
				else{
					d[it]=max(d[it],d[x]+1);
				}
			}
		}
		if(sum!=0)
            cout<<"-1"<<"\n";
		else{
			int ans=0;
			for(int i=1;i<=n;i++){
				ans=max(ans,d[i]);
			}
			cout<<ans<<"\n";
		}
	}
}
