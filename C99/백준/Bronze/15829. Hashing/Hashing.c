#include <stdio.h>

int main() {
    int l;
    long long sum = 0, r = 1;
    char s[50];
    
	scanf("%d %s", &l, s); 
	for(int i=0; i<l; i++) {
		sum = (sum + ((s[i]-'a'+1)*r)%1234567891)%1234567891;
		r = (r*31)%1234567891;
	}
	
	printf("%lld", sum);
    return 0;
}
