#include <stdio.h>

int main() {
	int m;
	scanf("%d", &m);
	
	if(m<=30)
		printf("%.1f\n", m/2.0);
	else
		printf("%.1f\n", 15+(m-30)*3/2.0);
	
	return 0;
}
