#include <bits/stdc++.h>
using namespace std;

struct person
{
    string name ;
    int day, month,year;
};
bool cmp (person a, person b)
{
    if(a.year != b.year)
        return a.year > b.year;
    if(a.month != b.month)
        return a.month > b.month;
    if(a.day != b.day)
        return a.day > b.day;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n ;
    cin>>n;
    vector<person> v;
    string name ;
    person inp;
    for( int i = 0 ; i < n ; ++i)
    {
        cin>>inp.name>>inp.day>>inp.month>>inp.year;
        v.push_back(inp);
    }
    sort(v.begin(),v.end(),cmp);
    int siz = v.size();
    cout<<v[0].name<<"\n"<<v[siz-1].name<<"\n";
    return 0;
}
