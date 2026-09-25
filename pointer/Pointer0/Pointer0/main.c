//
//  main.c
//  Pointer0
//
//  Created by Archit Jain on 25/09/26.
//

#include <stdio.h>

int main() {
    int x = 10;
    int *p= &x;
    
    printf("x=%d\n", x);
    printf("&x=%p\n", (void*)&x);
    printf("p=%p\n", (void*)&p);
    printf("*p=%d\n", *p);
    return 0;
}
