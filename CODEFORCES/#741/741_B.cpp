#include<bits/stdc++.h>
using namespace std;
int n;
void f(){
    vector<int> dg(10,0);
    int d;
    string s;
    cin>>d>>s;
    if(s.size()==1){
        cout<<1<<"\n"<<s<<"\n";
        return;
    }
    int ansD,ansN;
    for(char c:s){
        if(c=='1'||c=='4'||c=='6'||c=='8'||c=='9'){
            cout<<1<<"\n"<<c<<"\n";
            return;
        }
        dg[c-'0']+=1;
    }
    if(s[0]=='2'){
        if(dg[2]>1){
            cout<<2<<"\n"<<s[0]<<'2'<<"\n";
            return;
        }
        if(dg[5]){
            cout<<2<<"\n"<<s[0]<<'5'<<"\n";
            return;
        }
        if(dg[7]){
            cout<<2<<"\n"<<s[0]<<'7'<<"\n";
            return;
        }
    }
    if(s[0]=='3'){
        if(dg[2]){
            cout<<2<<"\n"<<s[0]<<'2'<<"\n";
            return;
        }
        if(dg[3]>1){
            cout<<2<<"\n"<<33<<"\n";
            return;
        }
        if(dg[5]){
            cout<<2<<"\n"<<s[0]<<'5'<<"\n";
            return;
        }
    }
    if(s[0]=='5'){
        if(dg[2]){
            cout<<2<<"\n"<<s[0]<<'2'<<"\n";
            return;
        }
        if(dg[5]>1){
            cout<<2<<"\n"<<55<<"\n";
            return;
        }
        if(dg[7]){
            cout<<2<<"\n"<<s[0]<<'7'<<"\n";
            return;
        }
    }if(s[0]=='7'){
        if(dg[2]){
            cout<<2<<"\n"<<s[0]<<'2'<<"\n";
            return;
        }
        if(dg[5]){
            cout<<2<<"\n"<<s[0]<<'5'<<"\n";
            return;
        }
        if(dg[7]>1){
            cout<<2<<"\n"<<s[0]<<'7'<<"\n";
            return;
        }
    }
    if(dg[3]>1){
        cout<<2<<"\n"<<33<<"\n";
        return;
    }
    if(dg[7]>1){
        cout<<2<<"\n"<<77<<"\n";
        return;
    }
    return ;
}

int main(){
    cin>>n;
    while(n--){
        f();
    }
    return 0;
}