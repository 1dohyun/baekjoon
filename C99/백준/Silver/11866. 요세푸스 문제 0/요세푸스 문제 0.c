#include <stdio.h>
	
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	
	int circle[1000];
	for(int i=0; i<n; i++)
		circle[i]=i+1;
	
	int count=0, removed=0;
	printf("<");
	
	while(removed<n) {
		for(int i=0; i<n; i++) {
			if(circle[i]!=0)
				count++;
			
			if(count==k) {
				printf("%d", circle[i]);
				circle[i]=count=0;
				
				removed++;
				if(removed!=n)
					printf(", ");
			}
		}
	}
	
	printf(">\n");
	return 0;
}
