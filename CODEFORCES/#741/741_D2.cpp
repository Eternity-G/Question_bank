#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
string s;
int t,n,q,sum[maxn];
int main(){
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        cin>>n>>q>>s;
        vector<vector<int> > pos(2*n+1);
        pos[n].push_back(0);
        sum[0]=n;
        for(int i=1;i<=n;i++){
            sum[i]=sum[i-1]+(i&1?(s[i-1]=='+'?1:-1):(s[i-1]=='+'?-1:1));
            pos[sum[i]].push_back(i);
        }
        int l,r,ans;
        for(int i=1;i<=q;i++){
            cin>>l>>r;
            int res=sum[r]-sum[l-1];
            if(!res)    cout<<"0\n";
            else if(abs(res)&1){
                cout<<"1\n";
                int temp=sum[l-1]+(res>0?res/2+1:res/2-1);
                cout<<*lower_bound(pos[temp].begin(),pos[temp].end(),l)<<"\n";
            }else{
                cout<<"2\n";
                --r;
                res=sum[r]-sum[l-1];
                int temp=sum[l-1]+(res>0?res/2+1:res/2-1);
                cout<<*lower_bound(pos[temp].begin(),pos[temp].end(),l)<<" "<<r+1<<"\n";
            }
        }
    }
    return 0;
}