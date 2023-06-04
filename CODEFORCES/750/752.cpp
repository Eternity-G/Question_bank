#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n;
    int a[200];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        if(a[i]>n){
            cout << a[i] - n << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t ;
    while(t--){
    solve();
   }
    return 0;
}
