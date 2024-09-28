#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* ptr;
    int n = 10;	
    int i;
    int counter = n;

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
  		printf("Memory not allocated.\n");
        	exit(0);
    }
    else {
        for (i = 0; i < n; ++i) {
		printf("Enter %d integers: ", counter--);
                scanf("%d",&ptr[i]);
        }

    }

    n = 5;
    ptr = (int*)realloc(ptr, n * sizeof(int));

    if (ptr == NULL) {
          	printf("Reallocation Failed\n");
          	exit(0);
    }
    else {
	printf("Array after resizing:");
	for(i = 0; i < n; ++i) {
		printf(" %d ",ptr[i]);
	}
	printf("\n");

    }	    

    free(ptr);

    ptr = NULL;

    return 0;
}

