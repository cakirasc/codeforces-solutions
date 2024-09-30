#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n,k;
    int sum =0;
    string s;
    vector<int> v;
    cin >> t;
    while (t--)
    {  
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                v.push_back(i+1);
            }
        }
        bool bro= v.size();
        if(bro){
        k=v[0];
        for (int i = 0; i < v.size(); i++) {
            if(v[i]%k==0){
                sum+=k;
            }
            else {
                k++;
                i--;
            }
        }
        }
        cout << sum <<endl;

    }
    
        
}