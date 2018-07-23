#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//strtok gives a different time everytime its run?

int main(void)
{
    char input[] = "A bird came down the walk";
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    for( count=0; count <= 1000000; count++) {
        strtok(input, " ");		
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strtok took %6.6f\n", secs);
    
}
