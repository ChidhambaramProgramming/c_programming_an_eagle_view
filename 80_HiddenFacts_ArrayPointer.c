#include<stdio.h>
int main() {
    int i, a[10] = {1,2,3,4,5,6,7,8,9,10};
    int (*ptr_a)[10] = &a; //pointer to array of 10 integer
    int *ptr_aa = a; //pointer to integer

    printf("Displaying data from Array (a) : \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", a[i]);
    }
    printf("\nDisplaying data from pointer to a (ptr_a) : \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", (*ptr_a)[i]);
    }
    printf("\nDisplaying data from pointer to a (ptr_a) using array convention: \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", (*ptr_a)[i]);
    }
    printf("\nDisplaying data from pointer to a (ptr_a) using pointer convention: \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", *((*ptr_a)+i));
    }
    printf("\nMemory walk through (ptr_a): \n");
    for(i=0; i<10; i++, ptr_a++) {
        printf("-> %d ", ptr_a);
    }
    printf("\nDisplaying data from pointer to a (ptr_aa) using arrray convention: \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", ptr_aa[i]);
    }
    printf("\nDisplaying data from pointer to a (ptr_aa) using pointer convention: \n");
    for(i=0; i<10; i++, ptr_aa++) {
        printf("-> %d ", *ptr_aa);
    }
    printf("\nMemory walk through (ptr_aa): \n");
    for(i=0; i<10; i++, ptr_aa++) {
        printf("-> %d ", ptr_aa);
    }
    printf("\n");
    return 0;
}



