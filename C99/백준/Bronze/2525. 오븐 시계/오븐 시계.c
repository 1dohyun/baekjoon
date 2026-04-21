#include <stdio.h>

int main() {
	int inputH, inputM, inputT;
	int outputH, outputM;
	scanf("%d %d", &inputH, &inputM);
	scanf("%d", &inputT);

	outputH = (inputH + (inputM + inputT) / 60) % 24;
	outputM = (inputM + inputT % 60) % 60;
	printf("%d %d", outputH, outputM);
	return 0;
}