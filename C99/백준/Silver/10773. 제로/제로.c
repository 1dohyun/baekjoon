#include <stdio.h>

int num[100000];
	
int main() {
	int k;
	scanf("%d", &k);
	
	int tmp, cur = 0;
	for(int i=0; i<k; i++) {
		scanf("%d", &tmp);
		
		if(tmp==0)
			num[--cur] = 0;
		else
			num[cur++] = tmp;
	}
	
	int sum = 0;
	for(int i=0; i<cur; i++)
		sum += num[i];
	
	printf("%d\n", sum);
	return 0;
}
