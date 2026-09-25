//
//  main.c
//  Pointer1
//
//  Created by Archit Jain on 25/09/26.
//

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main() {
    int x = 10;
    int y = 20;
    printf("%p %p\n", (void*)x,(void*)y);
    swap(&x, &y);
    printf("%d %d\n", x,y);
    printf("%p %p\n", (void*)x,(void*)y);
    return 0;
}
