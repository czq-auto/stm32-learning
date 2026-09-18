#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_wrong(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 1, y = 2;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap_wrong(x, y);
    printf("After wrong swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After correct swap: x = %d, y = %d\n", x, y);
    return 0;
}