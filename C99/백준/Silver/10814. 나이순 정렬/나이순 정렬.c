#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int age;
	int index;
	char name[101];
} member;

int compare(const void *a, const void *b) {
	member *m1 = (member *)a;
	member *m2 = (member *)b;
	
	if(m1->age != m2->age)
		return m1->age - m2->age;
	else
		return m1->index - m2->index;
}
	
int main() {
	int n;
	scanf("%d", &n);
	
	member members[n];
	
	for(int i=0; i<n; i++) {
		scanf("%d %s", &members[i].age, &members[i].name);
		members[i].index = i;
	}
	
	qsort(members, n, sizeof(member), compare);
	
	for(int i=0; i<n; i++)
		printf("%d %s\n", members[i].age, members[i].name);
	
	return 0;
}
