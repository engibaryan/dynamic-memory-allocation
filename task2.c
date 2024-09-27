#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* ptr;
    int n, i, counter;
    int sum = 0;

    printf("Enter number of elements:");
    scanf("%d",&n);
    counter = n;

    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
	printf("Array after calloc: ");
	for(int i = 0; i < n; ++i){
		printf(" %d ",ptr[i]);
	}
	printf("\n");

        for (i = 0; i < n; ++i) {
		printf("Enter %d number: ", counter--);
                scanf("%d",&ptr[i]);
        }
	
	printf("Updated array: ");
        for (i = 0; i < n; ++i) {
		printf(" %d ", ptr[i]);
            	sum = sum + ptr[i];
        }
	printf("\n");
        printf("Average of the array: %f\n",(double)sum/n);
    }

    free(ptr);

    ptr = NULL;

    return 0;
}
