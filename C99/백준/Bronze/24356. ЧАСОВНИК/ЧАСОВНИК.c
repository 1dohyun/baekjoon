#include <stdio.h>

int main() {
	int t1, m1;
	scanf("%d %d", &t1, &m1);
	
	int t2, m2;
	scanf("%d %d", &t2, &m2);
	
	int m = 0;
	
	while(t2!=t1 || m2!=m1) {
		if(++m1>=60) {
			m1 = 0;
			t1++;
		}
		
		if(t1>=24)
			t1 = 0;
		m++;
	}
	
	printf("%d %d\n", m, m/30);
	return 0;
}
