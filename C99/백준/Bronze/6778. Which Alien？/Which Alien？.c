#include <stdio.h>

int main() {
	int antenna, eyes;
	scanf("%d %d", &antenna, &eyes);
	
	if(antenna>=3 && eyes<=4)
		puts("TroyMartian");
		
	if(antenna<=6 && eyes>=2)
		puts("VladSaturnian");
		
	if(antenna<=2 && eyes<=3)
		puts("GraemeMercurian");
		
	return 0;
}
