#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n, k;
        scanf("%d %d",&n,&k);
        printf("%d\n",k^(k>>1));
    }
}
