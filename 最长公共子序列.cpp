#include <bits/stdc++.h>
using namespace std;
char s1[5010],s2[5010];
int len1,len2,c[5010][5010];
int main()
{scanf("%s%s",s1+1,s2+1);
len1=strlen(s1+1);len2=strlen(s2+1);
for(int i=1;i<=len1;++i)
for(int j=1;j<=len2;++j)
if(s1[i]==s2[j])c[i][j]=c[i-1][j-1]+1;
else c[i][j]=max(c[i-1][j],c[i][j-1]);
printf("%d\n",c[len1][len2]);
return 0;
}
