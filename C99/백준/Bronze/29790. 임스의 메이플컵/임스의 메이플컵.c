#include <stdio.h>

int main() {
    int n, u, l;
    scanf("%d %d %d", &n, &u, &l);
    
    if(n>=1000 && (l>=260 || u>=8000))
    	puts("Very Good");
    else if(n>=1000)
    	puts("Good");
    else
    	puts("Bad");
	
    return 0;
}
