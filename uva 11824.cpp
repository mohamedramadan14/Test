#include <bits/stdc++.h>
using namespace std;
#define MAX 5000000
bool cmp (int a, int b)
{
    return a>b;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tst ;
    cin>>tst;
    while(tst--)
    {
        vector<int> v;
        double res = 0,tem  ;
        int num;
        while(cin>>num && num)
            v.push_back(num);

        sort(v.begin(),v.end(),cmp);
        bool big = false;
        int ex = 1 ;
        for( int i = 0 ; i < v.size() ; i++)
        {
            tem = 2* pow(v[i],ex++);
            res += tem;
            if(res >= MAX)
            {
                big = true;
                break;
            }
        }
        if(big)
            cout<<"Too expensive\n";
        else
            cout<<fixed<<setprecision(0)<<res<<"\n";
    }

    return 0;
}
