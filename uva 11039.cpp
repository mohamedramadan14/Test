#include <bits/stdc++.h>
using namespace std;
bool cmp (int a, int b)
{
    if(abs(a) != abs(b))
        return abs(a) < abs(b);
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n ;
        cin>>n;
        if(n == 0)
        {
            printf("0\n");
            continue;
        }
        vector<int> v;
        int num;
        for( int i = 0 ; i < n ; ++i)
        {
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end(),cmp);
        bool start = (v[0] > 0 ? true : false);
        int cnt = 1;
        for( int i = 1 ; i < v.size() ; ++i)
        {
            if((v[i]<0&& start) || (v[i]>0 &&!start))
            {
                start = !start;
                ++cnt;
            }
        }
        cout<<cnt<<"\n";
    }

    return 0;
}
