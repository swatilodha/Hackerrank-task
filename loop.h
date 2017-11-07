#include<stdio.h>
#include<time.h>

double loop(clock_t t){
    printf("Entering while loop..\n");
    double time_taken = 0.00;
    
    while(1){
        t = clock() - t;
        time_taken = ((double)t)/CLOCKS_PER_SEC;
        if(time_taken > 3.00)
            return 4.00;
    }
    
    return time_taken;
}
