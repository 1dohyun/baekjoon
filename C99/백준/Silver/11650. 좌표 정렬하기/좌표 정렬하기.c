#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int x;
	int y;
} coordinate;

int compare(const void *a, const void *b) {
	coordinate *p1 = (coordinate *)a;
	coordinate *p2 = (coordinate *)b;
	
	if(p1->x != p2->x)
		return p1->x - p2->x;
	else
		return p1->y - p2->y;
}
	
int main() {
	int n;
	scanf("%d", &n);
	
	coordinate coordinates[n];
	
	for(int i=0; i<n; i++)
		scanf("%d %d", &coordinates[i].x, &coordinates[i].y);
	
	qsort(coordinates, n, sizeof(coordinate), compare);

	for(int i=0; i<n; i++)
		printf("%d %d\n", coordinates[i].x, coordinates[i].y);
	
	return 0;
}
