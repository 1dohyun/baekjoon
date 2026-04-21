#include <stdio.h>
#include <string.h>

int main() {
    int n, total = 0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	char str[10];
    	scanf("%s", str);
    	
    	if(strcmp(str, "Poblano")==0) total += 1500;
    	if(strcmp(str, "Mirasol")==0) total += 6000;
    	if(strcmp(str, "Serrano")==0) total += 15500;
    	if(strcmp(str, "Cayenne")==0) total += 40000;
    	if(strcmp(str, "Thai")==0) total += 75000;
    	if(strcmp(str, "Habanero")==0) total += 125000;
	}
	
	printf("%d\n", total);
    return 0; 
}
