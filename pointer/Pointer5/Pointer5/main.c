//
//  main.c
//  Pointer5
//
//  Created by Archit Jain on 25/09/26.
//

#include <stdio.h>

void swap(int *a, int *b) {
    int cv = *a;
    *a=*b;
    *b=cv;
}
int main() {
    int x = 30;
    int y = 90;
    printf("%p %p\n", (void*)x,(void*)y);
    swap(&x, &y);
    printf("%d %d\n", x,y);
    printf("%p %p\n", (void*)x,(void*)y);
    return 0;
}
