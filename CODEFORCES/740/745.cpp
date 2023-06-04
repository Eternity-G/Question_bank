#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long jie(long long n){
    if(n==1||n==2)
        return 1;
    else
        return n * jie(n - 1)  % mod;
}
int main(){
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout << jie(n * 2)<<endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// const int mod = 1e9 + 7;
 
// int main() {
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int n;
// 		cin >> n;
// 		long long f = 1;
// 		for (int i = 3; i <= 2*n; i++) {
// 			f = (f * i) % mod;
// 		}
// 		cout << f << '\n';
// 	}
// }
