#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n, m ;

    while(cin>>n>>m && (n || m))
    {

        bitset<MAX> bt;
        bt.set();

        int a,b,c;
        bool conf = false;
        while(n--)
        {
            cin>>a>>b;
            for(int i = a ; i < b ; ++i)
                if(bt[i] == 0)
                {
                    conf = true;
                    break;
                }
                else
                    bt[i] = 0;
        }
        while(m--)
        {
            cin>>a>>b>>c;
            while(a<MAX )
            {
                for(int j = a ; j < b ; ++j)
                    if(bt[j] == 0)
                    {
                        conf = true;
                        break;
                    }
                    else
                        bt[j] = 0;
                a+=c;
                b = min(b+c,MAX);
                if(conf)
                    break;

            }

        }
        if(conf)
            printf("CONFLICT\n");
        else
            printf("NO CONFLICT\n");
    }
    return 0;
}
