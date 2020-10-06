//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/06.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,n;
    int sum=0;
    
    printf("input a number: ");
    scanf("%i", &n);
    
    for (i=1; i<=n; i++)
        sum += i;//summation
        
    printf("the sum result is %i\n", sum);
    
    return 0;
}
