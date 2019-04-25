#include <bits/stdc++.h>
#include <string.h>
using namespace std;

struct info
{
    char name[105] ;
    int point, win, lose, tie;
    int score, oppscore;
    void init()
    {
        point = 0;
        win = 0;
        lose = 0;
        tie = 0;
        score = 0;
        oppscore = 0;
    }
    void record(int a, int b)
    {
        if(a > b)
        {
            win++;
            point += 3 ;
        }
        else if(a < b)
            lose++;
        else
        {
            tie++;
            point++;
        }
        score += a;
        oppscore += b;
    }
};
bool cmp (info a, info b)
{
    if(a.point != b.point )
        return a.point > b.point;
    if(a.win != b.win )
        return a.win > b.win ;
    if(a.score - a.oppscore != b.score - b.oppscore)
        return a.score - a.oppscore > b.score - b.oppscore;
    if(a.score != b.score )
        return a.score > b.score;
    if(a.win + a.lose + a.tie != b.win + b.tie + b.lose)
        return a.win + a.lose + a.tie < b.win + b.tie + b.lose;
    return strcasecmp(a.name, b.name) < 0 ;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    scanf("%*d ");

    int n, m, cases = 0, i ;
    char name[105], mres[105];
    while(gets(name))
    {
        scanf("%d", &n);
        getchar();
        map<string,int> mp;
        if(cases++)
            puts("");
        puts(name);
        info arr[50];
        for(  i = 0 ; i < n ; ++i)
        {
            gets(arr[i].name);
            arr[i].init();
            mp[arr[i].name] = i ;
        }

        scanf("%d", &m);
        getchar();
        while(m--)
        {
            gets(mres);
            char name1[50], name2[50];
            int num1,num2;
            sscanf(mres,"%[^#]#%d@%d#%[^\n]",name1,&num1,&num2,name2);
            arr[mp[name1]].record(num1,num2);
            arr[mp[name2]].record(num2,num1);
        }
        sort(arr,arr+n,cmp);
        for(int i = 0 ; i < n ; ++i)
            printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",i+1,arr[i].name, arr[i].point, arr[i].win+arr[i].lose+arr[i].tie,
                   arr[i].win, arr[i].tie, arr[i].lose, arr[i].score-arr[i].oppscore,
                   arr[i].score, arr[i].oppscore);
    }


    return 0;
}
