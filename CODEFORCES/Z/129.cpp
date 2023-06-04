#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define all(a) a.begin(), a.end()
#define nl '\n'
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n, m;
    int a[100] = {0}, b[100] = {0};
    cin >> n;
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m;i++){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    int n1 = a[n - 1];
    int m1 = b[m - 1];
    if(n1<m1){
        cout << "Bob" << nl;
        cout << "Bob" << nl;
    }else if(n1==m1){
        cout << "Alice" << nl;
        cout << "Bob" << nl;
    }else{
        cout << "Alice" << nl;
        cout << "Alice" << nl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define all(a) a.begin(), a.end()
#define nl '\n'
const int inf=0x3f3f3f3f;
const int maxn=2e5+5;
void solve(){
    int n;
    cin>>n;
    int a[maxn] = {0}, b[maxn] = {0};
    long long sum = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int m;
    cin>>m;
    for (int i = 0;i<m;i++){
        cin >> b[i];
        sum += b[i];
    }
    sum %= n;
    cout << a[sum] << nl;
}

int main(){
    ios::sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define all(a) a.begin(), a.end()
#define nl '\n'
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n;
    cin >> n;
    vector<pii> a, b, c, d;
    for (int i = 0;i<n;i++){
        int x;
        cin >> x;
        a.push_back({x, i});
    }
    for (int i = 0;i<n;i++){
        int xx;
        cin >> xx;
        b.push_back({xx, i});
    }
    // cout << "debug:\n";
    // for (int i = 0;i<n;i++){
    //     cout << a[i].first << " " << a[i].second << nl;
    // }
    // for (int i = 0;i<n;i++){
    //     cout << b[i].first << " " << b[i].second << nl;
    // }
    for (int i = 0;i<n;i++){
        int mm = a[i].first + b[i].first;
        c.push_back({mm, i});
    }
    sort(all(c));
    int flag = 0;
    for (int i = 1; i < n;i++){
        if(c[i].first==c[i-1].first&&(i==c[i].second||(i-1)==c[i-1].second)){
            if(a[c[i].second].first>a[c[i-1].second].first||a[c[i].second].first<a[c[i-1].second].first){
                flag = 1;
                break;
            }
        }
    }
    // for (int i = 0;i<n;i++){
    //     cout << c[i].first << " " << c[i].second << nl;
    // }
    //cout << "flag:" << flag << nl;
    if (flag)
        cout << -1 << nl;
    else{
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if(c[i].second+1>=i){
                cnt++;
                d.push_back({c[i].second + 1, i + 1});
            }
        }
        cout << cnt << nl;
        for(auto i:d){
            cout << i.first << " " << i.second << nl;
        }
    }
}

int main(){
    //ios::sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    for (int i = 0;i<n;i++){
        cin >> b[i];
    }
    vpii ans;
    for (int i = 0; i < n - 1;i++){
        for (int j = i + 1;j<n;j++){
            if(a[i]>a[j]||(a[i]==a[j]&&b[i]>b[j])){
                swap(a[i], a[j]);
                swap(b[i], b[j]);
                ans.push_back({i, j});
            }
        }
    }
    int flag = 1;
    for (int i = 1; i < n && flag;i++){
        if(a[i]<a[i-1]||b[i]<b[i-1])
            flag = 0;
    }
    if(!flag){
        cout << -1 << nl;
    }else{
        cout << ans.size() << nl;
        for(auto i:ans){
            cout << i.first + 1 << " " << i.second + 1 << nl;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n;
    cin >> n;
    ll v;
    cin >> v;
    queue<ll> q;
    map<ll, int> dist; // dist[a] = b; x数字共操作了b步得到的a
    dist[v] = 0;
    //cout << v << " ";
    q.push(v);
    int flag = 1;
    while(!q.empty()){
        ll k = q.front();
        q.pop();
        string s = to_string(k);
        if(s.size() == n){
            //cout << nl << k << " ";
            cout << dist[k] << nl;
            flag = 0;
            break;
        }
        for(auto x : s){
            if(x == '0') continue;
            ll w = k * int(x - '0');
            if(!dist.count(w))
            {
                dist[w] = dist[k] + 1;
                q.push(w);
                //cout << w << " ";
            }
        }
    }
    if(flag)
        cout << -1 << nl;
}

int main(){
    //ios::sync_with_stdio(0);
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
