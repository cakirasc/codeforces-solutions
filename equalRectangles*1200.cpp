#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int q,n,k,area;
    deque<long long int> d,dempty;
    cin >> q;
    while(q--){
        cin >> n;
        for(int i=0;i<4*n;i++){
            cin >>k;
            d.push_front(k);
        }
        sort(d.begin(),d.end());
        bool dude = true;
        for(int i=0;i<n;i++){
            if(d[2*i]==d[2*i+1]&&d[4*n-2*i-2]==d[4*n-2*i-1]) continue;
            else {
                dude=false;
                break;
            }
        }

        area= d.front()*d.back();
        while (!d.empty())
        { 
            if(area==d.front()*d.back()){
                d.pop_back();
                d.pop_front();
            }
            else break;
        }
        if(d.size()==0&&dude==true) cout << "YES"<<endl;
        else cout << "NO" <<endl;
        d=dempty;
    }
        
}