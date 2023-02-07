#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>


int main(int argc, char *argv[]){
    struct rlimit resource_limit;
    resource_limit.rlim_cur = 0;
    resource_limit.rlim_max = RLIMIT_CORE;

    
        
    
    char *ptr = NULL;
    ptr = malloc(256 * sizeof(char));
    if (!ptr) {
        fprintf(stderr, "malloc failed.\n");
        exit(EXIT_FAILURE);

    }
    *(ptr + 100 ) = 'a';
        *(ptr + 100 ) = 'a';
    *(ptr + 500 ) = 'b';
        *(ptr + 500000 ) = 'c';


    printf("Size of char is %ld\n", sizeof(char));
    free(ptr);

}
