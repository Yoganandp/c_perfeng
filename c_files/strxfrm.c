#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(void)
{
    const char *in1 = "hrnec";
    char out1[1+strxfrm(NULL, in1, 0)];
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    for( count=0; count <= 1000000; count++) {
        strxfrm(out1, in1, sizeof out1);	
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strxfrm took %6.6f\n", secs);
    
}
