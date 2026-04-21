#include <stdio.h>

int main() {
    int target, setA, yenA, setB, yenB;
    scanf("%d %d %d %d %d", &target, &setA, &yenA, &setB, &yenB);
    
    int A = 0, B = 0, cntA = 0, cntB = 0;
    
    while(A<target) {
    	A += setA;
    	cntA++;
	}
    	
    while(B<target) {
    	B += setB;
    	cntB++;
	}
    	
    if(cntA*yenA<cntB*yenB)
    	printf("%d\n", cntA*yenA);
    else
    	printf("%d\n", cntB*yenB);
	
    return 0;
}
