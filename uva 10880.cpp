#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

set<ll> solve (ll x )
{
    set<ll> v;
    int siz = sqrt(x);
    for( ll i = 1 ; i <= sqrt(x) ; ++i)
        if(x%i == 0  )
        {
            v.insert(i);
            v.insert(x/i);
        }

    return v;
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tst, c = 0;
    scanf("%d",&tst);
    ll a, b ;
    while(tst--)
    {
        scanf("%lld %lld",&a,&b);
        if(a == b)
        {
            printf("Case #%d: 0\n",++c);
            continue;
        }
        ll tem = a - b ;
        set<ll> res = solve(tem);
        printf("Case #%d:",++c);
        for( ll num : res)
            if(num > b)
                cout<<" "<<num;
        cout<<"\n";
    }



    return 0;
}
