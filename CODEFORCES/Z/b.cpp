#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
#define debug() cout << "debug:"
const int inf=0x3f3f3f3f;
const int maxn=2e5+5;
void solve(){
    int a,b;
    cin >> a >> b;
    if(abs(a-b)%2==0){
        cout << "No";
    }else
        cout << "Yes";
}

int main(){
    solve();
    return 0;
}
