#include <stdio.h>

int arr[101];

int main() {
	for(int i=1; i<=100; i++) {
		int members;
		scanf("%d", &members);
		
		if(members==0)
			break;
		
		for(int j=0; j<members; j++)
			scanf("%d", &arr[j]);
		
		if(members%2==1)
			printf("Case %d: %.1f\n", i, (float)arr[members/2]);
		else
			printf("Case %d: %.1f\n", i, (arr[members/2-1] + arr[members/2])/2.0);
	}
	
	return 0;
}
