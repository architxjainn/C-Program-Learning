//
//  main.c
//  CT1-1
//
//  Created by Archit Jain on 04/10/26.
//

#include <stdio.h>

int main() {
    int inc;
    printf("Enter your annual income:");
    scanf("%d", &inc);
    if (inc<=10000){
        printf("No Income tax");
    }
    else if(inc>=10000 && inc<=30000){
        printf("Income tax: %f/n", 0.1*inc);
    }
    else {
        printf("Income tax: %f/n", 0.3*inc);
    }
    return 0;
}
