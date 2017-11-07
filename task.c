#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "helloworld.h"
#include "loop.h"

clock_t t;

int main(){
    FILE *fptr;
 
    char fname[100], c;
 
    printf("Enter the filename to run: 1)helloworld 2)whileloop\n");
    scanf("%s", fname);
 
    // Open file
    /*fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file...Exiting \n");
        exit(0);
    }*/
    
    if(strcmp(fname,"helloworld") == 0){
        t = clock();
        double res = print(t);
        printf("Function took %f seconds\n", res);
    }
    else if(strcmp(fname,"whileloop") == 0){
        t = clock();
        double res = loop(t);
        if(res > 3.00)
            printf("There is an infinite loop. Exiting.\n");
        else
            printf("Function took %f seconds\n", res);
    }
    else
        printf("Enter a valid filename\n");
    
    return 0;
}
    
    
