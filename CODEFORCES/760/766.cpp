// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pii;
// const int inf=0x3f3f3f3f;
// const int maxn=1e6+5;
// void solve(){
//     int n, m, r, w;
//     cin >> n >> m >> r >> w;
//     int cnt = 0;
//     char a[55][55] = {0};
//     for (int i = 0; i < n;i++){
//         for (int j = 0; j < m;j++){
//             cin >> a[i][j];
//             if(a[i][j]=='B')
//                 cnt++;
//         }
//     }
//     if(a[r-1][w-1]=='B'){
//         cout << 0 << endl;
//         return;
//     }else {
//         for (int i = 0; i < m;i++){
//             if(a[r-1][i]=='B'){
//                 cout << 1 << endl;
//                 return;
//             }
//         }
//         for (int i = 0; i < n;i++){/
//             if(a[i][w-1]=='B'){
//                 cout << 1 << endl;
//                 return;
//             }
//         }
//         if(cnt>0)
//             cout << 2 << endl;
//         else
//             cout << -1 << endl;
//     }

// }

// int main(){
//     ios::sync_with_stdio(0);
//     int t;
//     cin>>t;
//     while(t--)
//     solve();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;
// const int inf = 0x3f3f3f3f;
// const int maxn = 1e6 + 5;
// //承压计算 答案：72665192664
// void solve(){
//     // double a[30][30] = {0};
//     // for (int i = 0; i < 29; i++)
//     //     for (int j = 0; j <= i; j++)
//     //         cin >> a[i][j];
//     // for (int i = 0; i < 29; i++){//转化代码
//     //     cout << "{";
//     //     for (int j = 0; j <= i; j++){
//     //         cout<< a[i][j];
//     //         if(j!=i)
//     //             cout << ",";
//     //         else
//     //             cout << "},";
//     //     }
//     //     cout << endl;
//     // }
        
//     double a[30][30]={
//         {7},
//         {5,8},
//         {7,8,8},
//         {9,2,7,2},
//         {8,1,4,9,1},
//         {8,1,8,8,4,1},
//         {7,9,6,1,4,5,4},
//         {5,6,5,5,6,9,5,6},
//         {5,5,4,7,9,3,5,5,1},
//         {7,5,7,9,7,4,7,3,3,1},
//         {4,6,4,5,5,8,8,3,2,4,3},
//         {1,1,3,3,1,6,6,5,5,4,4,2},
//         {9,9,9,2,1,9,1,9,2,9,5,7,9},
//         {4,3,3,7,7,9,3,6,1,3,8,8,3,7},
//         {3,6,8,1,5,3,9,5,8,3,8,1,8,3,3},
//         {8,3,2,3,3,5,5,8,5,4,2,8,6,7,6,9},
//         {8,1,8,1,8,4,6,2,2,1,7,9,4,2,3,3,4},
//         {2,8,4,2,2,9,9,2,8,3,4,9,6,3,9,4,6,9},
//         {7,9,7,4,9,7,6,6,2,8,9,4,1,8,1,7,2,1,6},
//         {9,2,8,6,4,2,7,9,5,4,1,2,5,1,7,3,9,8,3,3},
//         {5,2,1,6,7,9,3,2,8,9,5,5,6,6,6,2,1,8,7,9,9},
//         {6,7,1,8,8,7,5,3,6,5,4,7,3,4,6,7,8,1,3,2,7,4},
//         {2,2,6,3,5,3,4,9,2,4,5,7,6,6,3,2,7,2,4,8,5,5,4},
//         {7,4,4,5,8,3,3,8,1,8,6,3,2,1,6,2,6,4,6,3,8,2,9,6},
//         {1,2,4,1,3,3,5,3,4,9,6,3,8,6,5,9,1,5,3,2,6,8,8,5,3},
//         {2,2,7,9,3,3,2,8,6,9,8,4,4,9,5,8,2,6,3,4,8,4,9,3,8,8},
//         {7,7,7,9,7,5,2,7,9,2,5,1,9,2,6,5,3,9,3,5,7,3,5,4,2,8,9},
//         {7,7,6,6,8,7,5,5,8,2,4,7,7,4,7,2,6,9,2,1,8,2,9,8,5,7,3,6},
//         {5,9,4,5,5,7,5,5,6,3,5,3,9,5,8,9,5,4,1,2,6,1,4,3,5,3,2,4,1}
//     };
    
//     // int i, j;
//     // double max = 0, min = 9999999;
//     // double result;
//     // for (i = 1; i <= 29; i++){
//     //     for (j = 0; j <= i; j++){
//     //         if (j == 0)//如果为首个数值话，直接自身/2运算
//     //             a[i][j] += a[i - 1][0] / 2.0;
//     //         else//正常两个数值进行向下除法加法运算
//     //             a[i][j] += a[i - 1][j - 1] / 2.0 + a[i - 1][j] / 2.0;
//     //     }
//     // }
//     // for (i = 0; i <= 29; i++){
//     //     if (a[29][i] < min)
//     //         min = a[29][i];
//     //     if (a[29][i] > max)
//     //         max = a[29][i];
//     // }
//     // printf("%.0lf\n", 2086458231 / min * max);//对应成比例
// }

// int main()
// {
//     // ios::sync_with_stdio(0);
//     // int t;
//     // cin>>t;
//     // while(t--)
//     solve();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
const int inf=0x3f3f3f3f;
const int maxn=1e6+5;
const int N = 10;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int cnt;
bool vis[N][N];
void solve(int x,int y){
    if(x==0||y==0||x==6||y==6){
        cnt++;
        return;
    }
    for (int i = 0; i < 4;i++){
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(!vis[xx][yy]){
            vis[xx][yy] = 1;
            vis[6 - xx][6 - yy] = 1;
            solve(xx, yy);
            vis[xx][yy] = 0;
            vis[6 - xx][6 - yy] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    vis[3][3] = 1;
    solve(3,3);
    cout << cnt / 4;
    return 0;
}

