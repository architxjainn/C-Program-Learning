//
//  main.c
//  Pointer2
//
//  Created by Archit Jain on 25/09/26.
//

#include <stdio.h>

int main() {
    int x;
    int *p = &x;
    int **q =&p;
    printf("%d", q);
    return 0;
}
