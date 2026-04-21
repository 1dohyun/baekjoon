#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_K 1000001

typedef struct {
    int value;
    int id;
} Node;

Node min_heap[MAX_K];
Node max_heap[MAX_K];

int min_heap_size, max_heap_size;
bool is_deleted[MAX_K];

void push_min(Node node) {
    min_heap[++min_heap_size] = node;
    int cur = min_heap_size;
    
    while(cur>1 && min_heap[cur].value < min_heap[cur/2].value) {
        Node temp = min_heap[cur];
        min_heap[cur] = min_heap[cur/2];
        min_heap[cur/2] = temp;
        cur /= 2;
    }
}

void push_max(Node node) {
    max_heap[++max_heap_size] = node;
    int cur = max_heap_size;
    
    while(cur>1 && max_heap[cur].value>max_heap[cur/2].value) {
        Node temp = max_heap[cur];
        max_heap[cur] = max_heap[cur/2];
        max_heap[cur/2] = temp;
        cur /= 2;
    }
}

void pop_min() {
    if(min_heap_size == 0)
        return;
    
    min_heap[1] = min_heap[min_heap_size--];
    int cur = 1;
    
    while(cur*2<=min_heap_size) {
        int child = cur*2;
        
        if(child+1<=min_heap_size && min_heap[child+1].value<min_heap[child].value) 
            child++;
        
        if(min_heap[cur].value<=min_heap[child].value)
            break;
        
        Node temp = min_heap[cur];
        min_heap[cur] = min_heap[child];
        min_heap[child] = temp;
        cur = child;
    }
}

void pop_max() {
    if(max_heap_size==0)
        return;
    
    max_heap[1] = max_heap[max_heap_size--];
    int cur = 1;
    
    while(cur*2 <= max_heap_size) {
        int child = cur*2;
        if (child+1<=max_heap_size && max_heap[child+1].value>max_heap[child].value)
            child++;
        
        if (max_heap[cur].value >= max_heap[child].value) break;
        Node temp = max_heap[cur];
        max_heap[cur] = max_heap[child];
        max_heap[child] = temp;
        cur = child;
    }
}

void solve() {
    int k;
    scanf("%d", &k);
 
    min_heap_size = max_heap_size = 0;
    for(int i=0; i<k; i++)
        is_deleted[i] = false;

    for(int i=0; i<k; i++) {
        char cmd;
        int n;
        scanf(" %c %d", &cmd, &n);

        if(cmd=='I') {
            Node newNode = {n, i};
            push_min(newNode);
            push_max(newNode);
        } else {
            if(n==1) {
                while(max_heap_size > 0 && is_deleted[max_heap[1].id])
                    pop_max();
                
                if(max_heap_size>0) {
                    is_deleted[max_heap[1].id] = true;
                    pop_max();
                }
            } else {
                while(min_heap_size>0 && is_deleted[min_heap[1].id])
                    pop_min();
                
                if(min_heap_size>0) {
                    is_deleted[min_heap[1].id] = true;
                    pop_min();
                }
            }
        }
    }

    while(max_heap_size>0 && is_deleted[max_heap[1].id])
        pop_max();
    
    while(min_heap_size>0 && is_deleted[min_heap[1].id])
        pop_min();

    if(max_heap_size==0 || min_heap_size==0)
        printf("EMPTY\n");
    else
        printf("%d %d\n", max_heap[1].value, min_heap[1].value);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--)
        solve();
    
    return 0;
}
