#include <stdio.h>

int main() {
	long long vk, jk;
	scanf("%lld %lld", &vk, &jk);
	
	long long vl, jl;
	scanf("%lld %lld", &vl, &jl);
	
	long long vh, dh, jh;
	scanf("%lld %lld %lld", &vh, &dh, &jh);
	
	printf("%lld\n", (vk*jk+vl*jl)*(vh*dh*jh));
	return 0;
}
