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
//     int minn = 1e9, num = 0;
//     int a[10010];
//     for (int i = 0; i < s.size();i++){
//         a[i] = s[i] - 'a';
//     }
//     for (int i = 0; i < s.size();i++){
//         minn = min(minn, a[i]);
//         if(minn==a[i]){
//             num = i;
//         }
//     }
//     cout << s[num] << " ";
//     for (int i = 0; i < s.size();i++){
//         if(i==num)
//             continue;
//         cout << s[i];
//     }
//     cout << endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t ;
//     while(t--){
//     solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> arr;
// struct node
// {
//     int a, k;
// };

// int main()
// {
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             arr[i].clear();
//         }
//         arr.resize(0);
//         vector<int> a(n);
//         map<int, int> mpp;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             mpp[a[i]]++;
//         }
//         arr.push_back(a);

//         int k;
//         cin >> k;
//         int maxu = 0;
//         vector<node> p;
//         for (int i = 0; i < k; i++)
//         {
//             int a, kt;
//             cin >> a >> kt;
//             p.push_back({a, kt});
//             maxu = max(maxu, kt);
//         }

//         bool flag = 0;
//         for (int i = 1; i <= maxu; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 a[j] = mpp[a[j]];
//             }
//             mpp.clear();
//             for (int j = 0; j < n; j++)
//             {
//                 mpp[a[j]]++;
//             }
//             if (a == arr[i - 1])
//             {
//                 flag = 1;
//                 break;
//             }
//             arr.push_back(a);
//         }

//         for (int i = 0; i < p.size(); i++)
//         {
//             if (flag && p[i].k > arr.size() - 1)
//                 p[i].k = arr.size() - 1;
//             cout << arr[p[i].k][p[i].a - 1] << endl;
//         }
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
    cin>>n;
    vector<int> a;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        a.push_back(x);
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
