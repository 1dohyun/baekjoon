#include <stdio.h>

int main() {
	int total = 0;
	
   	for(int i=0; i<5; i++) {
   		int tmp;
   		scanf("%d", &tmp);
   		
   		if(tmp<40)
   			total += 40;
   		else
   			total += tmp;
	}
	
	printf("%d\n", total/5);
	return 0;
}
