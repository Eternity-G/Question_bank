#include<bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f3f;
const int maxn=1e6+5;

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int m=s.size();
        for(int i=0;i<m;i++){
            if(s[i]=='U')
                cout<<'D';
            else if(s[i]=='D')
                cout<<'U';
            else    
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
