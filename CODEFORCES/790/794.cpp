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
    int sum = 0;
    vi a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    int flag = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==floor(sum-a[i])/(n-1)){
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "yes" << nl;
    }
    else
    {
        cout << "no" << nl;
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

/*
inputCopy
4
3
42 42 42
5
1 2 3 4 5
4
4 3 2 1
3
24 2 22
outputCopy
YES
YES
NO
NO
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
#define debug() cout << "debug:"
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int c = 0;
    for (int i = 0; i < n - 1; i++){
        if (a[i] > a[i + 1]){
            //cout << a[i] << " " << a[i + 1];
            c++;
            i++;
        }
    }
    //debug();
    cout << c << nl;
}

int main(){
    ios::sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
#define all(a) a.begin(), a.end()
#define nl '\n'
#define debug() cout << "debug:";
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 5;
int a[maxn], b[maxn];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (n & 1)
        return cout << "NO\n", void();
    sort(a, a + n);
    int m = n >> 1;
    for (int i = 0; i < m; ++i)
        b[i * 2] = a[i], b[i * 2 + 1] = a[i + m];
    for (int i = 1; i < n; ++i)
        if (b[i] == b[i - 1])
            return cout << "NO\n", void();
    cout << "YES\n";
    for (int i = 0; i < n; ++i)
        cout << b[i] << ' ';
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
