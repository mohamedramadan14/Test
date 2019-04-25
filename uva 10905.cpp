#include <bits/stdc++.h>
using namespace std;
bool cmp(string a , string b){
return b+a < a+b;
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n ;
    while(cin>>n && n ){
    	vector<string> v;
    	string s;
    	for( int i = 0 ; i < n ; ++i){
    		cin>>s;
    		v.push_back(s);
    	}
    	sort(v.begin(),v.end(),cmp);
    	cout<<accumulate(v.begin(),v.end(),static_cast<string>(""))<<"\n";
    }



    return 0;
}
