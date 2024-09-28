#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **ptr;
    int n = 3;
    int additional_n = 2;
    int length = 50;

    ptr = (char **)malloc(n * sizeof(char *));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        ptr[i] = (char *)malloc(length * sizeof(char));
        if (ptr[i] == NULL) {
            printf("Memory allocation failed  %d.\n", i + 1);
            return 1;
        }
    }

    
    printf("Enter 3 strings (up to 50 characters each):\n");
    for (int i = 0; i < n; ++i) {
        printf("String %d: ", i + 1);
        fgets(ptr[i], length, stdin);
    }

    printf("\nYou entered 3 strings:\n");
    for (int i = 0; i < n; ++i) {
        printf("String %d: %s\n", i + 1, ptr[i]);
    }

   
    ptr = (char **)realloc(ptr, (n + additional_n) * sizeof(char *));
    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

  
    for (int i = n; i < n + additional_n; ++i) {
        ptr[i] = (char *)malloc(length * sizeof(char));
        if (ptr[i] == NULL) {
            printf("Memory allocation failed for string %d.\n", i + 1);
            return 1;
        }
    }

    printf("\nEnter 2 more strings (up to 50 characters each):\n");
    for (int i = n; i < n + additional_n; ++i) {
        printf("String %d: ", i + 1);
        fgets(ptr[i], length, stdin);
        
    }

    printf("You entered all 5 strings:");
    for (int i = 0; i < n + additional_n; ++i) {
        printf("%s ", ptr[i]);
    }
    

    for (int i = 0; i < n + additional_n; ++i) {
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}

