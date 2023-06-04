// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     string s1;
//     cin >> s1;
//     int a[1010];
//     int cnt = 0;
//     for (int j = 0; j < s1.size();j++)
//         for (int i = 0; i < s.size(); i++)
//         {
//             if(s1[j]==s[i]){
//                 a[cnt++]=i+1;
//             }
//         }
//     int sum = 0;
//     for (int i = 1; i < cnt;i++){
//         sum += abs(a[i] - a[i - 1]);
//     }
//     cout << sum << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t ;
//     while(t--){
//          solve();
//     }
//     return 0;
// // }

//B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
bool isji(ll x){
    if(x%2==0)
        return 0;
    else
        return 1;
}
void solve(){
    ll n,m;
    cin >> n >> m;
    if(isji(n)&&isji(m)){
        if(isji((m+1)/2)){
        	cout << n + m << endl;
         //   cout << n - m - 1 << endl;
        }else
        	cout << n - m - 1 << endl;
          //  cout << n + m << endl;
    }else if(isji(n)&&!isji(m)){
        if(isji((m+2)/2))
            cout << n << endl;
        else
            cout << n - 1 << endl;
    }else if(!isji(n)&&isji(m)){
        if(isji((m+1)/2)){
            cout << n - m << endl;
        }else{
            cout << m + n + 1 << endl;
        }
    }else{
        if(isji((m+2)/2)){
            cout << n << endl;
        }else{
            cout << n + 1<<endl;
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

//B
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	vector<ll>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	ll sum = 0, maxu = a[0];
	for (int i = 0; i < n; i++) {
		a[i] -= sum;
		maxu = max(a[i], maxu);
		sum += a[i];
	}
	cout << maxu << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

//C
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
	vector<ll>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	ll sum = 0, maxu = a[0];
	for (int i = 0; i < n; i++) {
		a[i] -= sum;
		maxu = max(a[i], maxu);
		sum += a[i];
	}
	cout << maxu << endl;
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

//D
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll, int> plb;
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
void solve(){
    int n;
	cin >> n;
	vector<plb> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first;
	}

	for (int i = 0; i < n; i++) {
		char ch;
		cin >> ch;
		if (ch == 'R') 
			arr[i].second = 1;
		else
			arr[i].second = 0;
	}

	sort(arr.begin(), arr.end(), [](const plb& t1, const plb& t2) {
		if (t1.second != t2.second)
			return t1.second < t2.second;
		return t1.first < t2.first;
		});

	for (int i = 0; i < n; i++) {
		if (arr[i].second) {
			if(arr[i].first > i + 1) {
				cout << "NO\n";
				return;
			}
		}
		else {
			if (arr[i].first < i + 1) {
				cout << "NO\n";
				return;
			}
		}
	}

	cout << "YES\n";
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
