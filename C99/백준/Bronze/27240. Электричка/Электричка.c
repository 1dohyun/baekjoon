#include <stdio.h>

int main() {
	long long n, a, b;
	scanf("%lld %lld %lld", &n, &a, &b);
	
	long long s, t;
	scanf("%lld %lld", &s, &t);
	
	if(s>t) {
		long long tmp = s;
		s = t;
		t = tmp;
	}
	
	int sc = s>a && s<b;
	int tc = t>a && t<b;
	
	if(sc && tc)
		puts("City");
	else if(!sc && !tc) {
		if(s<=a && t<=a)
			puts("Outside");
		else if(s>=b && t>=b)
			puts("Outside");
		else
			puts("Full");
	} else
		puts("Full");
	
	return 0;
}
