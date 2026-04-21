#include <stdio.h>

int main() {
	int a1, a2, a3, min;
	scanf("%d %d %d", &a1, &a2, &a3);
	
	int t1 = 2*a2 + 4*a3; //기계가 1층에 있을 때 
	int t2 = 2*a1 + 2*a3; //2층 
	int t3 = 4*a1 + 2*a2; //3층 
	
	min = t1;
	min = min<t2 ? min : t2;
	
	printf("%d\n", min<t3 ? min : t3);
	return 0;
}
