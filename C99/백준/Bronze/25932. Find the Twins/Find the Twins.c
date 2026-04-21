#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int mack = 0, zack = 0;
		
		for(int j=0; j<10; j++) {
			int tmp;
			scanf("%d", &tmp);
			
			if(tmp==17)
				zack = 1;
			else if(tmp==18)
				mack = 1;
			
			printf("%d ", tmp);
		}
			
		if(mack==1 && zack==1)
			printf("\nboth\n\n");
		else if(mack==1)
			printf("\nmack\n\n");
		else if(zack==1)
			printf("\nzack\n\n");
		else
			printf("\nnone\n\n");
	}
	
	return 0;
}
