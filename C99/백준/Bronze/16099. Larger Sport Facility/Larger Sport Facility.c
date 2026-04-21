#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i<t; i++) {
		long long lt, wt, le, we;
		scanf("%lld %lld %lld %lld", &lt, &wt, &le, &we);
		
		long long eur = le*we;
		long long tel = lt*wt;
		
		if(eur>tel)
			puts("Eurecom");
		else if(tel>eur)
			puts("TelecomParisTech");
		else
			puts("Tie");
	}
	
	return 0;
}
