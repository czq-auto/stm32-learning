#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;              /* p 里存的是 a 的地址 */

    printf("a 的值        = %d\n", a);
    printf("&a 的地址     = %p\n", (void *)&a);
    printf("p 的值  = %p\n", (void *)p);     /* 和上面一样 */
    printf("*p 指向的值   = %d\n", *p);           /* 10 */
    printf("&p 自己的地址 = %p\n", (void *)&p);    /* 不同 */

    *p = 99;                  /* 顺着地址改 a */
    printf("改完 a        = %d\n", a);            /* 99 */

    return 0;
}