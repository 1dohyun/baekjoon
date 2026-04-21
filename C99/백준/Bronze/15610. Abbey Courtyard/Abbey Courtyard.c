#include <stdio.h>
#include <math.h>

int main() {
    long long int yard;
    scanf("%lld", &yard);
    
    double len = sqrt(yard)*4;
	printf("%.8f\n", len);
    return 0;
}
