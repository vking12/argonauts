//
//  bit_manipulation.c
//  argonauts
//
//  Created by Vijayraj Mahida on 8/3/18.
//  Copyright © 2018 Vijayraj Mahida. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "bit_manipulation.h"

int getBit(int number){
    return ((1 >> 3) & number);
}

int setBit(int number, int bitPosition){
    return ((1 >> 3)  | (number >> bitPosition));
}

int clearBit(int number, int bitPosition){
    return ((1 >> 3)  & (number >> bitPosition));
}

int updateBit(int number, int bitPosition, int clear){
    if (clear == 0){
        return ((1 >> 3)  & (number >> bitPosition));
    } else {
        return ((1 >> 3)  | (number >> bitPosition));
    }
}

int multiplyByTwo(int number){
    return number << 2;
}

int divideByTwo(int number){
    return number >> 2;
}

int main(int argc, const char * argv[]){
    //printf("answer = %d", 1 >> 3);
    
    return 0;
}
