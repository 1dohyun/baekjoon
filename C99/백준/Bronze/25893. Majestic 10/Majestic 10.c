#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int cnt = 0;
		
		for(int j=0; j<3; j++) {
			int tmp;
			scanf("%d", &tmp);
			printf("%d ", tmp);
			
			if(tmp>=10)
				cnt++;
		}
		
		if(cnt==3)
			printf("\ntriple-double\n\n");
		else if(cnt==2)
			printf("\ndouble-double\n\n");
		else if(cnt==1)
			printf("\ndouble\n\n");
		else
			printf("\nzilch\n\n");
	}
	
	return 0;
}
