#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int d, before, bad = 0;
		scanf("%d", &d);
		
		printf("Denominations: ");
		for(int j=0; j<d; j++) {
			int tmp;
			scanf("%d", &tmp);
			printf("%d ", tmp);
			
			if(j!=0 && before*2>tmp)
				bad = 1;
			before = tmp;
		}
		
		if(bad==1)
			printf("\nBad coin denominations!\n\n");
		else
			printf("\nGood coin denominations!\n\n");
	}
	
	return 0;
}
