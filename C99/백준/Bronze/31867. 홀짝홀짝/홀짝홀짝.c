#include <stdio.h>

int main() {
	int n, even = 0, odd = 0;
	scanf("%d", &n);
	
	char arr_k[n+1];
	scanf("%s", arr_k);
	
	for(int i=0; i<n; i++) {
		if((arr_k[i]-'0')%2==0)
			even++;
		else
			odd++;
	}
	
	if(even>odd)
		puts("0");
	else if(odd>even)
		puts("1");
	else
		puts("-1");
	
	return 0;
}
