//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/06.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int answer = 59;
    int i, trial=0;
    
    do
    {
        printf("input a number:");
        scanf("%i", &i);
        if (answer > i)
            printf("low!\n");
        else if (answer < i)
            printf("high!\n");
        
        trial++;
        
    } while(i != answer);
    
    printf("Conglaturation, number of trial : %i\n", trial);
    
    
    return 0;
}
