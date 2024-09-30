#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> s;
    int n,k;
    cin >> n;
    while(n--){
        cin>>k;
        s.insert(k);
    }
    if(s.size()>3) {cout << -1 <<endl;}
    else if(s.size()==3){
        auto it = s.begin();
        //second element
        auto it2=s.begin();
        it2++;
        //last element in the set
        auto it3=s.end();
        it3--;
        if ((*it+*it3)/2==*it2&&(*it+*it3)%2==0) cout << abs(*it-*it2) <<endl;
        else cout << -1 <<endl;
    }
    else if(s.size()==2){
        auto it = s.begin();
        auto it3=s.end();
        it3--;
        if((*it3+*it)%2==0){
        cout << (*it3-*it)/2<<endl;
        }
        else cout << (*it3-*it) <<endl;
    }
    else if (s.size()==1) {cout << 0<< endl;}
    else cout << -1<<endl;
}