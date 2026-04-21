#include <stdio.h>

int main() {
    int p, c;
    scanf("%d %d", &p, &c);
    
    int score = p*50-c*10;
    if(p>c)
    	score += 500;
    
    printf("%d\n", score);
    return 0; 
}
