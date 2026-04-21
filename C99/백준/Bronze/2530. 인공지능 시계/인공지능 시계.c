#include <stdio.h>

int main() {
	int h, m, s, t;
	scanf("%d %d %d %d", &h, &m, &s, &t);
	
	while(t>0) {
		if(++s>=60) {
			s=0; m++;
		}
		
		if(m>=60) {
			m=0; h++;
		}
		
		if(h>=24)
			h=m=s=0;
		t--;
	}
	
	printf("%d %d %d\n", h, m, s);
	return 0;
}
