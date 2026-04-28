#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0;

    string target = "hello";
    int j=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == target[j])
        {
            j++;
        }
        if(j == target.size())
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
