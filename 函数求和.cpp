#include <bits/stdc++.h>
using namespace std;
int main()
{double res[300]={0,0.5},c;
int i;
for(i=2;i<300;i++)
res[i]=res[i-1]+1.0/(i+1);
while(scanf("%lf",&c)&&c){
	for(i=1;i<300;i++){
		if(res[i]>=c){
			printf("%d\n",i);
			break;
		}
	}
}
return 0;
}
