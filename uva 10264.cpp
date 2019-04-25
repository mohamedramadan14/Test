#include <bits/stdc++.h>
using namespace std;
bool is_neighbour(int a,int b)
{
    int x = a^b ;
    return (x&(-x)) == x;
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int n ;
    int pot[1<<15];
    while(scanf("%d",&n) == 1)
    {
        int res = 0 ;
        memset(pot,0,sizeof(pot));
        for(int i = 0 ; i < 1<<n ; ++i)
        {
            int x;
            scanf("%d",&x);
            for(int j = 0 ; j < 1<<n ; ++j)
                if(is_neighbour(i,j) && (i!=j) )
                    pot[j] += x;
        }
        for(int i = 0 ; i < 1<<n ; ++i)
        {
            for(int j = 0 ; j < 1<<n ; ++j)
                if(is_neighbour(i,j) && (i!=j))
                    res= max(res,pot[j]+pot[i]);
        }
        printf("%d\n",res);
    }


    return 0;
}
