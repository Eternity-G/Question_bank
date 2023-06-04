#include<bits/stdc++.h>
using namespace std;

const int N=5e3+5;
int lcp[N][N];
int dp[N];
int n;
char s[300010];
void init(){
    for(int i=1;i<=n+1;i++){
        for(int j=i;j<=n+1;j++){
            lcp[i][j]=0;
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=n;j>=i;j--){
            if(s[i]==s[j])  lcp[i][j]=lcp[i+1][j+1]+1;
        }
    }
}
bool lar(int x,int y){
    int num=lcp[y][x];
    return (num!=n-x+1&&s[x+num]>s[y+num]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s+1;
        init();
        int ans=0;
        for(int i=1;i<=n;i++){
            dp[i]=n-i+1;
            for(int j=1;j<i;j++){
                int num=lcp[j][i];
                if(lar(i,j))
                    dp[i]=max(dp[i],dp[j]+n-i+1-num);
            }
            ans=max(ans,dp[i]);
        }
        cout<<ans<<"\n";
    }
}
