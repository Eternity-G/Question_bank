#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l,r;
    cin>>l>>r;
    cout<<r-(r/2+1>=l?r/2+1:l)<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}