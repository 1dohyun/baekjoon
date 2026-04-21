#include <stdio.h>

int main() {
	int ds, ys;
	scanf("%d %d", &ds, &ys);
	
	int dm, ym;
	scanf("%d %d", &dm, &ym);
	
	for(int i=0; i<=5000; i++) {
		int r = (ys-ds)%ys + i*ys;
		if(r%ym==(ym-dm)%ym) {
			printf("%d\n", r);
			break;
		}
	}
    
    return 0;
}
