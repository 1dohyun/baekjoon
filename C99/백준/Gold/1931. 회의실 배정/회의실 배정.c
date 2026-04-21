#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Meeting;

Meeting meetings[100001];

int cmp(const void *a, const void *b) {
    Meeting *m1 = (Meeting *)a;
    Meeting *m2 = (Meeting *)b;

    if(m1->end != m2->end) {
        if(m1->end < m2->end) 
			return -1;
			
        if(m1->end > m2->end)
			return 1;
	}
    
    if(m1->start < m2->start)
		return -1;
		
    if(m1->start > m2->start)
		return 1;
    
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d %d", &meetings[i].start, &meetings[i].end);
	qsort(meetings, n, sizeof(Meeting), cmp);
    
	int cnt = 0, last = 0;
    for(int i=0; i<n; i++) {
        if(meetings[i].start>=last) {
            cnt++;
            last = meetings[i].end;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
