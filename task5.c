#include <stdio.h>
#include <stdlib.h>

int main() {
	int* ptr;
	int n = 0;
	int i, counter;
	int highest = 0;
	int lowest = 100;

	printf("Input number of students: ");
	scanf("%d", &n);
	counter = n;	
	ptr = (int*)malloc(n * sizeof(int));

	if(ptr == NULL) {
		printf("Memory is not allocated");
		exit(0);
	}
	else {
		for(i = 0; i < n; ++i) {
			printf("Enter grade for %d student: ", counter--);
			scanf("%d", &ptr[i]);
		}	
	}

	for(int i = 0; i < n; ++i) {
		if(ptr[i] > highest) {
			highest = ptr[i];
		}
		if(ptr[i] < lowest) {
			lowest = ptr[i];
		}
	}
	
	printf("Highest grade is %d \n", highest);
	printf("Lowest grade is %d \n", lowest);
	
	free(ptr);

	return 0;
	
}
