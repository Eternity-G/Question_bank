#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        queue<char> a;
        queue<char> b;
        
        for (int i = 1; i <= n;i++){
            for (int j = 0; j < n;j++){
                        a.push('(');
                        b.push(')');
                    }
            queue<char> q;
            int na = 1;
            q.push(a.front());
            a.pop();
            for (int j = 1; j < 2 * n; j++){
                if(a.empty()){
                    q.push(b.front());
                    b.pop();
                    continue;
                }
                if(i==na){
                    q.push(b.front());
                    b.pop();
                    na--;
                }else{
                    na++;
                    q.push(a.front());
                    a.pop();
                }
            }
            for (int i = 0; i < 2 * n;i++){
                char c = q.front();
                cout << c;
                q.pop();
            }
            cout << "\n";
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
	cin >> t;
	while (t--)
	{
		int x[3];
		int m;
        cin >> x[0] >> x[1] >> x[2] >> m;
        int up = x[0] + x[1] + x[2] - 3;
        sort(x + 0, x + 3);
        int down = x[2] - x[1] - x[0] - 1;
        if (m <= up && m >= down)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
ll n, m, a[N], sum, def, att;
const ll inf = 7e18;
 
ll check(ll tem,int pos)
{
	if (pos == 0) return inf;
	ll ans = 0;
	if (a[pos] < def)
        ans += (def - a[pos]);
    tem -= a[pos];
	if (tem < att) {
		ans += (att - tem);
	}
	return ans;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum += a[i];
		if (sum >= inf || sum < 0) sum = inf;
	}
	cin >> m;
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= m; i++)
	{
		ll ans = 0;
		cin >> def >> att;
		int pos = lower_bound(a + 1, a + n + 1, def) - a;
		if (a[pos] == 0) {
			ans += (def - a[n]);
			if (att > sum - a[n]) {
				ans += (att - sum + a[n]);
			}
		}
		else {
			ans = min(check(sum, pos), check(sum, pos - 1));
		}
		cout << ans << endl;
	}
	return 0;
}
