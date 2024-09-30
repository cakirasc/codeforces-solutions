#include <bits/stdc++.h>

using namespace std;
void PrintStack(stack<int> s)
{
    stack<int> temp;
    while (s.empty() == false)
    {
        temp.push(s.top());
        s.pop();
    }  
 
    while (temp.empty() == false)
    {
        int t = temp.top();
        cout << t << " ";
        temp.pop();
 
        // To restore contents of
        // the original stack.
        s.push(t); 
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s,newstack,heb;
    deque<int> d;
    
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0 ; i<n;i++){
            cin >> k;
            s.push(k);
        }

    while (s.size()!=0)
        {
            if (s.top()==n){
                newstack.push(s.top());
                while (!d.empty())
                {
                    newstack.push(d.front());
                    d.pop_front();
                }
                s.pop();
                n--;
            }
            else {
                d.push_front(s.top());
                s.pop();
                if (s.size()==0) newstack.push(d.front());
            }
        }

        PrintStack(newstack);
        newstack=heb;
        cout << endl;
    }

}