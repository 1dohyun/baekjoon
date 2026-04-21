#include <stdio.h>

int main() {
   	int dataset;
   	scanf("%d", &dataset);
   	
   	for(int i=0; i<dataset; i++) {
   		int ships, speed, date, total = 0;
   		scanf("%d %d %d", &ships, &speed, &date);
   		
   		for(int j=0; j<ships; j++) {
   			int distance, load;
   			scanf("%d %d", &distance, &load);
   			
   			if(distance<=speed*date)
   				total += load;
		}
		
		printf("Data Set %d:\n%d\n\n", i+1, total);
	}
   	
	return 0;
}
