#include <stdio.h>

int main() {
    int degree = 0;
    
    for(int i=0; i<10; i++) {
        int com;
        scanf("%d", &com);
        
        if(com==1)
			degree += 90;
        else if(com==2)
			degree += 180;
        else
			degree -= 90;
    }

    degree %= 360;
    if(degree<0)
		degree += 360;

    if(degree == 0)
		puts("N");
    else if(degree==90)
		puts("E");
    else if(degree==180)
		puts("S");
    else if(degree==270)
		puts("W");

    return 0;
}
