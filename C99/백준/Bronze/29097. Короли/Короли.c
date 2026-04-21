#include <stdio.h>

int main() {
    int n, m, k, a, b, c;
    scanf("%d %d %d %d %d %d", &n, &m, &k, &a, &b, &c);
    
    int j = n*a;
    int r = m*b;
    int s = k*c;
    
    int max = j;
    if(r>max)
		max = r;
	
    if(s>max)
		max = s;
    
    if(j==max)
		printf("Joffrey");
    
    if(r==max) {
        if(j==max)
			printf(" ");
        printf("Robb");
    }
    
    if(s==max) {
        if(j==max || r==max)
			printf(" ");
        printf("Stannis");
    }
    
    return 0;
}
