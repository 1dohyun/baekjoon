#include <stdio.h>

int main() {
   	int m, d;
   	scanf("%d %d", &m, &d);
   	
   	if(m==2 && d==18)
   		puts("Special");
   	else if((m==2 && d<18) || m<2)
   		puts("Before");
   	else
   		puts("After");
   	
	return 0;
}
