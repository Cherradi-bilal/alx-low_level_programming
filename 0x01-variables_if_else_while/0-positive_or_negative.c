#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // do not touch this code

    int n = rand() % 201 - 100; // do not touch this code

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}

