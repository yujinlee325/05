//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/06.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
        int i;
    
        printf("정수 하나를 입력하시오.: ");
        scanf("%i", &i);
        
        if(i > 0)
            printf("양수입니다. \n");
        else if (i < 0)
            printf("음수입니다. \n");
        else
            printf("0입니다. \n");
    return 0;
}
