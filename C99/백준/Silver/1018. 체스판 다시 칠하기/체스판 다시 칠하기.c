#include <stdio.h>
#include <string.h>

char board[50][51];

int paint(int x, int y) {
    int w = 0, b = 0;

    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            char current = board[x+i][y+j];
            
            if ((i+j)%2==0) {
                if (current!='W')
					w++;
                if (current!='B')
					b++;
            } else {
                if (current!='B')
					w++;
                if (current!='W')
					b++;
            }
        }
    }

    return w>b ? b : w;
}

int main() {
    int n, m;
    
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; i++) {
        scanf("%s", board[i]);
    }

    int result = 64;
    for (int i=0; i<=n-8; i++) {
        for (int j=0; j<=m-8; j++) {
            int r = paint(i, j);
            if (r<result)
                result = r;
        }
    }

    printf("%d\n", result);
    return 0;
}
