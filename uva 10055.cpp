#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
	long long int a,b;
	while(scanf("%lld %lld",&a,&b)==2)printf("%lld\n",abs(a-b));
	return 0;
}
