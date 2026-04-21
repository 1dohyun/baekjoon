#include <stdio.h>

int main() {
    int inputH, inputM;
    int outputH, outputM;
    scanf("%d %d", &inputH, &inputM);
    if(inputM >= 45) {
        outputM = inputM - 45;
        outputH = inputH;
    } else {
        if(inputH ==  0) {
            outputH = 23;
        } else {
            outputH = inputH - 1;
        }
        outputM = 60 - (45 - inputM);
    }
    printf("%d %d", outputH, outputM);
    return 0;
}