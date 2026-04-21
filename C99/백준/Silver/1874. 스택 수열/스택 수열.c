#include <stdio.h>

int stack[100000];
int top = -1;

char ops[200000];
int op_idx = 0;

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int curr = 1;

    for(int i=0; i<n; i++) {
        int target = arr[i];

        while(curr<=target) {
            stack[++top] = curr++;
            ops[op_idx++] = '+';
        }

        if(stack[top]==target) {
            top--;
            ops[op_idx++] = '-';
        } else {
            puts("NO");
            return 0;
        }
    }

    for(int i=0; i<op_idx; i++)
        printf("%c\n", ops[i]);

    return 0;
}
