#include <stdio.h>

int main() {
	int h, m, s, t = 0;
	scanf("%d : %d : %d", &h, &m, &s);
	
	int H, M, S;
	scanf("%d : %d : %d", &H, &M, &S);
	
	while(h!=H || m!=M || s!=S) {
		if(++s>=60) {
			s = 0;
			m++;
		}
		
		if(m>=60) {
			m = 0;
			h++;
		}

		if(h>=24)
			h = 0;

		t++;
	}
	
	printf("%d\n", t);
	return 0;
}
