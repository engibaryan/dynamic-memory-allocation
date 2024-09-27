#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* ptr;
    int n, i;
    int sum = 0;

    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {


        for (i = 0; i < n; ++i) {
            	printf("Enter number: ");
		scanf("%d",&ptr[i]);
        }

        for (i = 0; i < n; ++i) {
            sum = sum + ptr[i];
        }
	printf("Sum of the integers is: %d\n",sum);
    }

    free(ptr);

    ptr = NULL;

    return 0;
}

