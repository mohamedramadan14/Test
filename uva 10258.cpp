#include <bits/stdc++.h>

using namespace std;

struct info
{
    int teamNum = 0,solved = 0,penalty = 0 ;
    map<int,int> wrong;
    map<int,int> accept;
};
int sch (vector<info> v, int siz,int targ)
{
    for( int i = 0 ; i < siz ; ++i)
    {
        if(v[i].teamNum == targ)
            return i;
    }
    return -1;
}
bool cmp (info a,info b)
{
    if(a.solved != b.solved)
        return a.solved > b.solved;
    if(a.penalty != b.penalty)
        return a.penalty < b.penalty;
    else
        return a.teamNum < b.teamNum;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tst;
    scanf("%d",&tst);
    getchar();
    getchar();
    while(tst--)
    {

        vector<info> v;
        int a,b,c;
        char ch;
        string inp;
        while(getline(cin,inp))
        {
            if(inp == "")
                break;
            istringstream iss(inp);
            iss>>a>>b>>c>>ch;
            int srch = sch(v,v.size(),a);
            if(srch == -1)
            {
                info in ;
                in.teamNum = a;
                if(ch == 'I')
                {
                    in.wrong[b] += 1;
                }
                else if(ch == 'C')
                {
                    in.penalty = c;
                    in.solved = 1;
                    in.accept[b] = 1;
                }

                v.push_back(in);
            }
            else
            {
                if(ch == 'I')
                {
                    v[srch].wrong[b] += 1;
                }
                else if(ch == 'C')
                {
                    if(v[srch].wrong[b] == 0 && v[srch].accept[b] == 0)
                    {
                        v[srch].penalty += c;
                        v[srch].accept[b] = c;
                        v[srch].solved += 1;
                    }
                    else if(v[srch].wrong[b] != 0 && v[srch].accept[b] == 0)
                    {
                        v[srch].penalty+=c+(v[srch].wrong[b])*20;
                        v[srch].solved += 1;
                        v[srch].accept[b] = c;
                    }
                }
            }

        }
        sort(v.begin(),v.end(),cmp);
        for( int i = 0 ; i < v.size() ; ++i)
            cout<<v[i].teamNum<<" "<<v[i].solved<<" "<<v[i].penalty<<"\n";
        if(tst)
            cout<<"\n";
    }
    return 0;
}
