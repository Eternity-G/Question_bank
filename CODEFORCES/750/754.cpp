// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     ll a, b, c;
//     cin >> a >> b >> c;
//     ll sum = a + b + c;
//     a = sum / 3;
//     b = (sum - a) / 2;
//     c = sum - a - b;
//     cout << abs(a + c - 2 * b) << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t ;
//     while(t--){
//          solve();
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a;
    int j = n-1;
    for (int i = 0; i < n;i++){
        if(s[i]-'0'==1)
            for (; j >i;j--){
            if(s[j]-'0'==0){
                a.push_back(i + 1);
                a.push_back(j + 1);
                j--;
                break;
            }
        }
    }
    sort(a.begin(),a.end());
    if(!a.size()){
        cout << "0" << endl;
    }else{
        cout << 1 << endl;
        cout << a.size() << " ";
        for (int i = 0; i < a.size();i++){
            cout << a[i] << " ";
        }
        cout << endl;
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
