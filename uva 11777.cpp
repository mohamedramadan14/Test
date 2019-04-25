#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tst,cases = 0;
    cin>>tst;
    while(tst--)
    {
        int a,b,c,d,t1,t2,t3;
        cin>>a>>b>>c>>d;
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3,greater<int>());
        int test = (arr[0]+arr[1])/2;
        int res = a+b+c+d+test;
        if(res >= 90)
            printf("Case %d: A\n",++cases);
        else if( res >=80 )
            printf("Case %d: B\n",++cases);
        else if( res >= 70)
            printf("Case %d: C\n",++cases);
        else if(res >= 60)
            printf("Case %d: D\n",++cases);
        else
            printf("Case %d: F\n",++cases);
    }

    return 0;
}
