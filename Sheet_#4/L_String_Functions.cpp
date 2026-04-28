#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;

    while(q--)
    {
        string cmd;
        cin>>cmd;

        if(cmd == "substr")
        {
            int l, r;
            cin>>l>>r;
            if (l > r) swap(l, r);
            l--;r--;
            cout<<s.substr(l,r-l+1)<<endl;
        }
        else if(cmd == "sort")
        {
            int l, r;
            cin>>l>>r;
            if (l > r) swap(l, r);
            l--;r--;
            sort(s.begin()+l, s.begin()+r+1);
        }
        else if(cmd == "pop_back")
        {
            s.pop_back();
        }
        else if(cmd == "back")
        {
            cout<<s.back()<<endl;
        }
        else if(cmd == "reverse")
        {
            int l, r;
            cin>>l>>r;
            if (l > r) swap(l, r);
            l--;r--;
            reverse(s.begin()+l, s.begin()+r+1);
        }
        else if(cmd == "front")
        {
            cout<<s.front()<<endl;
        }
        else if(cmd == "push_back")
        {
            char x;
            cin>>x;
            s.push_back(x);
        }
        else if(cmd == "print")
        {
            int pos;
            cin>>pos;
            pos--;
            cout<<s[pos]<<endl;
        }
    }
    return 0;
}
