#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char name[21];
	int idx;
	struct node *next;
} node;

node *table[200003];

unsigned long hash(const char *s) {
	int c; unsigned long h = 5381;
	
	while((c = *s++))
		h = ((h<<5)+h)+c;	
	return h%200003;
}

void insert(const char *name, int idx) {
	unsigned long h = hash(name);
	node *n = (node*)malloc(sizeof(node));
	strcpy(n->name, name);
	
	n->idx = idx;
	n->next = table[h];
	table[h] = n;
}

int find(const char *name) {
	unsigned long h = hash(name);
	node *cur = table[h];
	
	while(cur) {
		if(strcmp(cur->name, name)==0)
			return cur->idx;
		cur = cur->next;
	}
	
	return -1;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	char **p = (char**)malloc(sizeof(char*)*n);
	for(int i=0; i<n; i++) {
		p[i] = (char *)malloc(21);
		
		scanf("%s", p[i]);
		insert(p[i], i+1);
	}
		
	for(int i=0; i<m; i++) {
		char s[21];
		scanf("%s", s);

		int k = 0;
		for(int j=0; s[j]!='\0'; j++) {
			if(s[j]<'0' || s[j]>'9') {
				k = 1;
				break;
			}
		}
		
		if(k==1) {
			int res = find(s);
			printf("%d\n", res);
		} else {
			int v = atoi(s);
			printf("%s\n", p[v-1]);
		}
	}
	
    return 0;
}
