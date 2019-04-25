#include <bits/stdc++.h>
using namespace std;
string solve (string s)
{
    for(int i = 0 ; i < 4 ; ++i)
        reverse(s.begin()+(i*8),s.begin()+(i+1)*8);
    return s;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n ;
    while(scanf("%d",&n)==1)
    {

        bitset<32>bt(n);
        string bnum = bt.to_string();
        bnum = solve(bnum);
        reverse(bnum.begin(),bnum.end());
        bitset<32>res(bnum);
        int num = 0;
        for( int i = 31 ; i >= 0 ; --i)
        {
            if(res.test(i))
                num += pow(2,i);
        }

        printf("%d converts to %d\n",n,num);
    }
    return 0;
}
