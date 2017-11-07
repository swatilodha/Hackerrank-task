#include<stdio.h>
#include<time.h>

double print(clock_t t){
    printf("Hello World!\n");
    for(int i=0; i<1000000; i++)
        
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    
    return time_taken;
}
