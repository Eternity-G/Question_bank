#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    vector<int> a;
    for (int i = 1; i <= 3000;i++){
        if (i % 3 != 0 && i % 10 != 3)
        {
            a.push_back(i);
        }
    }
    while(t--){
        int n;
        cin>>n;
        cout << a[n-1] << endl;
    }
    return 0;
}
