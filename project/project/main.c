//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/06.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num=0;
    char c;
    
        printf("Input a string: ");
        
        while((c=getchar()) != '\n')
        {
            if( c >= '0' && c <= '9')
            {
                num++;
            }
        }
    printf("the number of digits is %i\n", num);
       
    return 0;
}
