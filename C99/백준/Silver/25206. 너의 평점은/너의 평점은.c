#include <stdio.h>
#include <string.h>

int main() {
	char name[50];
	char grade[2];
	
    float score;
    float fsum = 0.0;
    float ssum = 0.0;
    
    for(int i=0; i<20; i++) {
    	scanf("%s %f %s", name, &score, grade);
    	
    	if(strcmp(grade, "P") == 0)
    		continue;
    	
    	if(strcmp(grade, "A+") == 0)
    		fsum += score*4.5;
    	if(strcmp(grade, "A0") == 0)
    		fsum += score*4;
    	if(strcmp(grade, "B+") == 0)
    		fsum += score*3.5;
    	if(strcmp(grade, "B0") == 0)
    		fsum += score*3;
    	if(strcmp(grade, "C+") == 0)
    		fsum += score*2.5;
    	if(strcmp(grade, "C0") == 0)
    		fsum += score*2;
    	if(strcmp(grade, "D+") == 0)
    		fsum += score*1.5;
    	if(strcmp(grade, "D0") == 0)
    		fsum += score*1;
		
		ssum += score;
	}
	
	printf("%f", fsum/ssum);
    return 0;
}
