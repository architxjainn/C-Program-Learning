//
//  main.c
//  Pointer4
//
//  Created by Archit Jain on 25/09/26.
//

#include <stdio.h>

int main() {
    int a[]= {10,20,30};
    int *p = &a;
    printf("%d\n", *(p+2));
    return 0;
}
