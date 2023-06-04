#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int T,n;
char s[maxn];
int main(){
    ios::sync_with_stdio(0);
    cin>>T;
    while(T--){
        cin>>n;
        cin>>s+1;
        int flag=0;
        int m=0;
        for(int i=1;i<=n;i++){
            if(s[i]=='0'){
                flag=1;
                m=i;
                break;
            }
        }
        if(flag){
            if(m<=n/2)
                cout<<m<<" "<<n<<" "<<m+1<<" "<<n<<"\n";
            else
                cout<<1<<" "<<m<<" "<<1<<" "<<m-1<<"\n";
        }else{
            if(n%2) cout<<1<<" "<<n-1<<" "<<1<<" "<<n/2<<"\n";
            else cout<<1<<" "<<n<<" "<<1<<" "<<n/2<<"\n";
        }
    }
    return 0;
}