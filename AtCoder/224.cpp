#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    if(s.length()>=3){
        if(s.substr(s.length()-3,3)=="ist")
            cout << "ist" << endl;
    }
    if(s.substr(s.length()-2,2)=="er")
        cout << "er";
    return 0;
}
