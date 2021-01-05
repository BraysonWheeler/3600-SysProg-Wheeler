//
//  rotate.c
//  
//  mmh0269
//  Created by Madison Hardage on 10/15/20.
//
#include "major1.h"

int rotate(unsigned int num,int bits)
{
    int bi, BITS;
    BITS = 31;
    unsigned int new_num;
    
    int least_sig;
    
    //printf("rotate\n");
    //printf("Enter a 32 bit number (>=1 and <=4294967295): ");
    //scanf("%d",&num);
    
    //check if num is valid
    
    //printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
    //scanf("%d",&bits);
    
    //printf("Original Number: %d\n",num);
    //printf("Rotate by %d bit(s)\n",bits);
    /*
    printf("binary: ");
    for (int count=31;count>=0;count--)
    {
        bi = num >> count;

        if (bi&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    */
    //num = bi >> bits;
    for(int b=0;b<=bits;b++)
    {
        least_sig = num & 1;
        new_num = num >> 1;
        new_num = new_num & (~(1 << BITS));
        new_num = new_num | (least_sig << BITS);
    }
    
    //printf("%d Rotated by %d Equals: %u\n",num,bits,new_num);
    
    return new_num;
}
