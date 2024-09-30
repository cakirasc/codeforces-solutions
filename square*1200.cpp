#include <bits/stdc++.h>

// 194B Square

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    long long int n;
    cin >> t;
    while(t--){
       cin >> n;
       if (4*n%(1+n)==0){
       cout << 4*n/(1+n) + 1<<endl;
       }
       else {
        cout << 4*n/gcd(1+n,4*n) +1<<endl;
       }
    }
        
}