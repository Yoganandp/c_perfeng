#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//memcpy took 0.000000000

int main(void)
{
    char source[] = "once upon a midnight dreary...", dest[4];
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    for( count=0; count <= 1000000; count++) {
        memcpy(dest, source, sizeof dest);		
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("memcpy took %6.6f\n", secs);
    
}
