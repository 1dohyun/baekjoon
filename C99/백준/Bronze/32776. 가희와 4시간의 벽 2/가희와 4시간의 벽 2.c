#include <stdio.h>

int main() {
	int Sab, Ma, Fab, Mb;
	scanf("%d %d %d %d", &Sab, &Ma, &Fab, &Mb);
	
	if(Sab<=240)
		puts("high speed rail");
	else
		printf("%s\n", Sab<=Ma+Mb+Fab ? "high speed rail" : "flight");
	
	return 0;
}
