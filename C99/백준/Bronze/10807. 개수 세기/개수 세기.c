#include<stdio.h>
main(){int n,a,v,c=0;scanf("%d",&n);int i=n,x[n];for(i=0;i<n;i++)scanf("%d",x+i);scanf("%d",&v);for(i=0;i<n;i++)c+=x[i]==v;printf("%d",c);}