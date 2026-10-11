//
//  main.c
//  CT1-0
//
//  Created by Archit Jain on 04/10/26.
//

#include <stdio.h>

int main() {
    float F, C;
    printf("Enter your Temprature in Celcius: ");
    scanf("%f",&C);
    F = (9*C)/5+32;
    printf("%f", F);
    return 0;
}
