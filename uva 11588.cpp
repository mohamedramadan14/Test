#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tst, cases = 0;
    cin>>tst;
    while(tst--)
    {
        int x,y,n,m;
        cin>>x>>y>>n>>m;
        map<char,int> mp;
        char ch;
        for( int i = 0 ; i < x ; ++i)
        {
            for( int j = 0 ; j < y ; ++j)
            {
                cin>>ch;
                mp[ch]++;
            }
        }
        int mx = -9999999;
        int cnt = 0 ;
        int rep = 0 ;
        for(auto ele : mp)
        {
            if(ele.second > mx)
            {
                mx = ele.second;
                rep = 0;
            }
            if(ele.second == mx)
                ++rep;
        }
        cnt = (x*y)-mx*rep;
        int res = n*mx*rep + cnt*m;
        printf("Case %d: %d\n",++cases,res);
    }



    return 0;
}
