#include <stdio.h>

int main() {
	int y, m, d;
	scanf("%d %d %d", &y, &m, &d);
	
	int Y, M, D;
	scanf("%d %d %d", &Y, &M, &D);
	
	int t1 = Y-y;
	int t2 = t1;
	int t3 = t1+1;
	
	if(M<m || (M==m && D<d))
		t2--;
	
	if(t1<0) t1 = 0;
	if(t2<0) t2 = 0;
	if(t3<0) t3 = 0;
	
	printf("%d\n%d\n%d\n", t2, t3, t1);
	return 0;
}