#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn=1e6+5;
bool is(string s){
    for (int i = 0; i < s.size();i++){
        if((s[i]-'0')%2==0)
            return true;
    }
    return false;
}
void solve(){
    string s;
    cin >> s;
    int n = s[0] - '0';
    int m = s[s.size() - 1] - '0';
    if(m%2==0)
        cout << "0" << endl;
    else if(n%2==0){
        cout << '1' << endl;
    }
    else{
        if(s.size()!=1&&is(s))
            cout << "2" << endl;
        else{
            cout << "-1" << endl;
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

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn=1e6+5;
void solve(){
    ll a, b;
    cin >> a >> b;
    ll m = (a + b) / 4;
    cout << min(min(a, b), m) << endl;
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

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn=1e6+5;
void solve(){
    stack<int> st;
    queue<int> q;
    int n;
    cin >> n;
    int a[maxn], b[maxn];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    if(min(a[0],a[n-1])!=b[0]||max(a[0],a[n-1])!=b[n-1]){
        cout << "-1\n";
    }else if(b[0]==b[n-1]){
        for (int i = 0; i < n;i++)
            cout << a[i]<<" ";
        cout << endl;
    }
    else{
        for (int i = 0, j = n - 1; i != j; ){
            if(a[i]>=a[j]){
                //左大
                st.push(a[i]);
                i++;
            }else{
                q.push(a[j]);
                j--;
            }
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
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

