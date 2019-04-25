#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n;
    while(cin>>n && n)
    {
        int a = 0, b = 0, i = 0 ;
        bool e = true;
        while((1LL<<i )<= n)
        {
            if(n & (1LL<< i) && e)
            {
                a|=(1LL << i);
                e= !e;
            }
            else if(n & (1LL<< i) && !e)
            {
                b |= 1LL<<i;
                e= !e;
            }
            ++i;
        }
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
