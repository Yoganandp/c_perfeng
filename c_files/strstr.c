#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//strstr took 0.000000

int main(void)
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    for( count=0; count <= 1000000; count++) {
        strstr("C library", "rary");		
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strstr took %6.6f\n", secs);
    
}
