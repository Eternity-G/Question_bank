// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     string s;
//     cin >> s;
//     int n = s.size();
//     int cnt = 0;
//     // if(s[n-2]=='N')
//     //     cout << "YES\n";
//     // else if(s[n-2]=='E'){
//     //     for (int i = 0; i < n - 2;i++){
//     //         if(s[i]=='N')
//     //             cnt++;
//     //     }
//     //     if(cnt%2==0){
//     //         if(s[n-1]=='N')
//     //             cout << "NO\n";
//     //         else
//     //             cout << "YES\n";
//     //     }
//     //     else
//     //         cout << "NO\n";
//     //         // if(s[n-1]=='E')
//     //         //     cout << "NO\n";
//     //         // else
//     //         //     cout << "YES\n";
//     // }
//     for (int i = 0; i < n;i++){
//         if(s[i]=='N')
//             cnt++;
//     }
//     if(cnt==1)
//         cout << "NO\n";
//     else
//         cout << "YES\n";
//     // for (int i = 0; i < n-2;i++){
//     //     if(s[i]=='N')
//     //         cnt++;
//     // }
//     // if(s[n-2]=='N'&&cnt%2)
//     // if((cnt%2==0&&s[n-1]=='E')||(cnt!=0&&s[n-1]=='N'))
//     //     cout << "YES\n";
//     // else
//     //     cout << "NO\n";
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

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;

// const int maxn=1e6+5;
// void solve(){
//     int x, y;
//     cin >> x >> y;
//     ll maxx = 0;
//     ll maxy = 0;
//     for (int i = 0; i < 2;i++){
//         int n;
//         cin>>n;
//         ll a,b;
//         ll x;
//         for (int j = 0; j < n; j++){
//             cin>>x;
// 			if(j==0)a=x;
// 			if(j==n-1)b=x ;
//         }
//         maxx = max(maxx, (b-a));
//     }
//     for (int i = 0; i < 2;i++){
//         int n;
//         cin>>n;
//         ll a,b;
//         ll x;
//         for (int j = 0; j < n; j++){
//             cin>>x;
// 			if(j==0)a=x;
// 			if(j==n-1)b=x ;
//         }
//         maxy = max(maxy, (b-a));
//     }
//     ll num = max(maxx * y, maxy * x);
//     cout << num << endl;
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
// void solve()
// {
//     ll n, k, x;
//     cin >> n >> k >> x;
//     string s;
//     cin >> s;

//     if (x == 1 || k == 0)
//     {
//         string ans = "";
//         for (int i = 0; i < n;i++)
//         {
//             if (s[i] == 'a')
//             {
//                 ans.push_back('a');
//             }
//         }
//         cout << ans << endl;
//         return;
//     }

//     vector<int> v;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (s[i] == '*')
//         {
//             if (i < (n - 1) && s[i + 1] == '*')
//             {
//                 v.back() += k;
//             }
//             else
//             {
//                 v.push_back(k + 1);
//             }
//         }
//     }

//     int m = v.size();
//     ll s1 = 1;
//     vector<int> cnt(m, 0);
//     int i = 0;
//     for (; i < m; i++)
//     {
//         double dx = v[i];
//         double nn = (x / dx);
//         if (nn <= s1)
//         {
//             for (int j = i; j >= 0; j--)
//             {
//                 if (j != i)
//                     s1 = s1 / v[j];
//                 cnt[m - j - 1] = (x - 1) / s1;
//                 x = (x - 1) % s1 + 1;
//             }
//             break;
//         }
//         s1 = s1 * v[i];
//     }

//     int inn = m - 1;
//     char prev = 'a';
//     string z = "";
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (s[i] == '*' && prev == '*')
//         {
//             s.erase(s.begin() + i);
//             continue;
//         }
//         else if (s[i] == '*')
//         {
//             z = "";
//             while (cnt[inn]--)
//             {
//                 z.push_back('b');
//             }
//             s.erase(s.begin() + i);
//             s.insert(i, z);
//             inn--;
//             prev = '*';
//         }
//         else
//         {
//             prev = 'a';
//         }
//     }
//     cout << s << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int maxn = 1e6 + 5;
int a[maxn], b[maxn];
int cnt[3];
void solve()
{
    int n;
    cin >> n;
    cnt[0] = cnt[1] = cnt[2] = 0;
    int res = 0, max_a = 0, flag_1 = 0, flag_max = 0;
    ;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cnt[a[i] % 3]++;
        res = max(res, a[i] / 3);
        max_a = max(max_a, a[i]);
        if (a[i] == 1)
            flag_1 = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (max_a - 1 == a[i])
        {
            flag_max = 1;
        }
    }
    if (cnt[1] == cnt[2] && cnt[1] == 0)
    {
        cout << res << '\n';
    }
    else if (cnt[2] == 0 || cnt[1] == 0)
    {
        cout << res + 1 << '\n';
    }
    else if (max_a % 3 == 0)
    {
        cout << res + 1 << '\n';
    }
    else if (max_a % 3 == 1 && !flag_1 && !flag_max)
    {
        cout << res + 1 << '\n';
    }
    else
    {
        cout << res + 2 << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int maxn = 1e6 + 5;
int q;
map<int, int> m;
vector<pair<int, int>> qs;
void solve()
{

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        qs.push_back({-1, -1});
        if (t == 1)
            cin >> qs.back().second;
        else
            cin >> qs.back().first >> qs.back().second;
    }
    vector<int> ans;
    for (int i = q - 1; i >= 0; i--)
    {
        if (m[qs[i].second] == 0)
            m[qs[i].second] = qs[i].second;
        if (qs[i].first == -1)
            ans.push_back(m[qs[i].second]);
        else
            m[qs[i].first] = m[qs[i].second];
    }
    reverse(ans.begin(),ans.end());
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
