#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n>m || n==m)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<m<<endl;
        }

    }
}