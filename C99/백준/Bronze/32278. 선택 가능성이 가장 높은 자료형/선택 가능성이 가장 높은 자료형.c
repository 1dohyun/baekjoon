#include <stdio.h>
#include <math.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    
    if(n>=-(pow(2, 15)) && n<=pow(2, 15)-1)
    	puts("short");
    else if(n>=-(pow(2, 31)) && n<=pow(2, 31)-1)
    	puts("int");
    else
    	puts("long long");
    	
    return 0;
}
