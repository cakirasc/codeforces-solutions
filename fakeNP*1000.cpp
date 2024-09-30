#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int l,r;
    cin >> l >> r;
    bool k= false;
    if(l==r){
        for (int i=2; i*i <= l;i++){
            if (l%i==0){
                cout << i << endl;
                k= true;
                break;
            }
        }
        if(!k) cout << l << endl;
    }
    else cout << 2 <<endl;
        
}