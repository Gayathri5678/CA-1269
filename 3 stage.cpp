#include <stdio.h>

int main() {
    int n;
    int instructionCount; 

    printf("Enter the number of stages in the pipeline: ");
    scanf("%d", &n);

    printf("Enter the number of instructions: ");
    scanf("%d", &instructionCount);

    
    int totalCycles = n * instructionCount;

    printf("Total clock cycles needed to complete %d instruction(s): %d\n", instructionCount, totalCycles);
	return 0;
	
}