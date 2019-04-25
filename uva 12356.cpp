#include <bits/stdc++.h>
using namespace std;

int L[100005],R[100005];
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);


    int s, b ;
    while(cin>>s>>b && s && b)
    {
        for( int i = 1 ; i <= s ; ++i)
        {
            L[i] = i-1;
            R[i] = i+1;
        }
        L[1] = -1 ;
        R[s] = -1 ;
        int l,r;
        for( int i = 0 ; i < b ; ++i)
        {
            cin>>l>>r;
            L[R[r]] = L[l];
            if(L[l] != -1)
                cout<<L[l]<<" ";
            else
                cout<<"* ";

            R[L[l]] = R[r];
            if(R[r] != -1)
                cout<<R[r]<<"\n";
            else
                cout<<"*\n";
        }
        printf("-\n");
    }

}
