#include <stdio.h>
#include <math.h>

int main() {
	int p1, s1;
	scanf("%d %d", &p1, &s1);
	
	int s2, p2;
	scanf("%d %d", &s2, &p2);
	
	int pt = p1+p2;
	int et = s1+s2;
	
	if(pt>et)
		puts("Persepolis");
	else if(pt<et)
		puts("Esteghlal");
	else {
		if(p2>s1)
			puts("Persepolis");
		else if(p2<s1)
			puts("Esteghlal");
		else
			puts("Penalty");
	}
		
	return 0;
}
