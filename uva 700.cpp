#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int y, a, b;
    int n, cases = 0;

    while(cin>>n && n)
    {
        bitset<10000> bt;
        bt.set();
        while(n--)
        {
            cin>>y>>a>>b;
            for(int i = 0 ; i < y ; ++i)
                bt[i] = 0;

            for(int i = y ; i < 10000 ; ++i)
            {
                if( i != y && (i-y)%(b-a) != 0)
                    bt[i] = 0;
            }
        }

        bool ok = false;
        int res = 0;
        for(int i = 0 ; i < 10000 ; ++i)
        {
            if(bt[i])
            {
                ok = true;
                res = i;
                break;
            }
        }
        printf("Case #%d:\n",++cases);
        if(ok)
            printf("The actual year is %d.\n",res);
        else
            printf("Unknown bugs detected.\n");

        printf("\n");
    }


    return 0;
}
