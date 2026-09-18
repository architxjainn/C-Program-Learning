//
//  main.c
//  passbyrefrence
//
//  Created by Archit Jain on 18/09/26.
//

#include <stdio.h>

void interchange(int *a, int *b);
int main(void)
{
    int i=5, j=10;
    printf("before interchange %d %d\n", i,j);
    interchange(&i, &j);
    printf("After interchange %d %d", i,j);
    return 0;
}
void interchange(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

#include <stdio.h>

void interchange(int *a, int *b);
int main(void)
{
    int i=5, j=10;
    printf("before interchange %d %d\n", i,j);
    interchange(&i, &j);
    printf("After interchange %d %d", i,j);
    return 0;
}
void interchange(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

