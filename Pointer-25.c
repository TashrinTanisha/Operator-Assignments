#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    printf("First element: %d\n", *a);
    printf("Second element: %d\n", *(a + 1));
    printf("Third element: %d\n", *(a + 2));

    return 0;
}
