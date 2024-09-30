#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string k,j;
    cin >> k;
    j=k;
    for(int i =0 ; i < k.size();i++){
        if(k[i]==*"0") {
        k.erase(k.begin()+i);
        break;
        }
    }
    if(j==k) k.erase(k.begin());
    cout << k <<endl;
        
}