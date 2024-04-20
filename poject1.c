#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    // 1-den 100-e qeder reqemlerin cemi proqrami


    int sum=0;
    int i;

    for(i=0; i<=100; i++){
        sum += i;

        printf("Netice: %d\n", sum);
    }
    
    
    return 0;


}