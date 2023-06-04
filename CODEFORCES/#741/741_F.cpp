#include<bits/stdc++.h>
#define PI 3.141592653589793238462
#define eps 1e-10
#define fi first
#define se second
using namespace std;
using cd = complex<double>;
typedef long long ll;
typedef long double db;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<db,db> pdd;
mt19937 rnd(chrono::system_clock::now().time_since_epoch().count());
//rnd()%n,shuffle(a+1,a+n+1,rnd);
ll p[200005];
vector<ll> c[105];
ll ask(ll x,ll y){
    cout<<"? "<<x<<" "<<y<<endl;
    ll v;cin>>v;return v;
}
int main(){
    for(ll i=2;i<=200000;i++){
        if(p[i]) continue;
        for(ll j=i;j<=200000;j+=i){
            p[j]=i;
        }
    }
    ll q;cin>>q;
    while(q--){
        ll n,mx=0,w=-1;cin>>n;
        vector<ll> ans;
        if(n<=100){
            for(ll i=1;i<=n;i++) c[i].clear();
            for(ll i=1;i<=n;i++){
                for(ll j=i+1;j<=n;j++){
                    ll v=ask(i,j);
                    c[i].push_back(v);
                    c[j].push_back(v);
                }
            }
            for(ll i=1;i<=n;i++){
                ans.push_back(0);
                for(auto v:c[i]){
                    ans.back()=__gcd(ans.back(),v);
                }
            }
            if(n==3&&ans[0]%2==0&&ans[1]%2==0&&ans[2]%2==0){
                for(auto v:ans) mx=max(mx,v);
                for(ll i=0;i<3;i++) if(ans[i]==mx) ans[i]/=2;
            }
        }
        else{
            for(ll o=0;o<250;o++){
                ll x=rnd()%n+1,g=0;
                for(ll j=1;j<=20;j++){
                    ll y=rnd()%n+1;
                    while(y==x) y=rnd()%n+1;
                    g=__gcd(g,ask(x,y));
                }
                if(p[g]==g){
                    if(mx<g) mx=g,w=x;
                }
            }
            for(ll i=1;i<=n;i++){
                if(i==w) ans.push_back(mx);
                else ans.push_back(ask(w,i)/mx);
            }
        }
        cout<<"! ";
        for(auto v:ans){
            cout<<v<<" ";
        }cout<<endl;
    }
}
