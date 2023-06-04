#include<bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f3f;
const int maxn=100007;
const int mod=1000000007;

void f(){
    int a,b;
    cin>>a>>b;
    int Xor;
    if(a%4==1) Xor=a-1;
    else if(a%4==2) Xor=1;
    else if(a%4==3) Xor=a;
    else Xor=0;
    if(Xor==b) cout<<a<<"\n";
    else if((Xor^b)!=a) cout<<a+1<<"\n";
    else cout<<a+2<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        f();
    }
    return 0;
}
