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
        
        if(i < 0)
            i = i*(-1);
    
            printf("절댓값은 %i 입니다.\n", i);
       
    return 0;
}
