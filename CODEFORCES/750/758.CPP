// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     int n;
//         cin >> n;
//         int a[n];
//         for (int i = 2; i < n + 2; i++)
//         {
//             a[i - 1] = i;
//             cout << a[i - 1] << " ";
//         }
//         cout << endl;
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

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;

// const int maxn = 1e6 + 5;
// int p[100010];
// ll a, b, n;
// void solve(){
//     cin >> n >> a >> b;
//     for (int i = 1; i <= n; i++)
//         p[i] = i;
//     if (abs(a - b) > 1 || a + b > n - 2){
//         cout << "-1\n";
//         return;
//     }
//     if (a == b)
//         for (int i = 1; i <= a; i++)
//             swap(p[2 * i], p[2 * i + 1]);
//     else if (a < b)
//         for (int i = 1; i <= b; i++)
//             swap(p[2 * i - 1], p[2 * i]);
//     else
//         for (int i = 1; i <= a; i++)
//             swap(p[n - 2 * i + 2], p[n - 2 * i + 1]);
//     for (int i = 1; i <= n; i++)
//         cout << p[i] << ' ';
//     cout << '\n';
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while (t--){
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
const int N=1e5+10;
struct point {
	int x,y;
	int id;
	int type;
}a[N];
bool cmp(point a,point b){
	return a.x<b.x;
}
bool cmp2(point a,point b){
	return a.id<b.id;
}
void solve(){
    int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i].x;
			a[i].id=i;
			a[i].type=0;
		}
		for(int i=1;i<=n;i++){
			cin>>a[i].y;
		}
		sort(a+1,a+1+n,cmp);
		int temp=a[n].y;
		int minn=temp;
		int ans=n;
		for(int i=n-1;i>=1;i--){
			minn=min(minn,a[i].y);
			if(a[i].y>=temp){
				temp=min(minn,temp);
				ans=i;
			}
		}
		for(int i=n;i>=ans;i--){
			a[i].type=1;
		}
		sort(a+1,a+1+n,cmp2);
		for(int i=1;i<=n;i++) cout<<a[i].type;
		cout<<endl;
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

