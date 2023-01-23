#include <compress/compress.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int main(void) {

    char buffer_in [256] = {"Hello World!!!"};
    char* buffer_out = compress(buffer_in);
    char* buffer_final = decompress(buffer_out);

    printf("Original Text %s\n", buffer_in);
    printf("Uncompressed size is: %lu\n", strlen(buffer_in));

    printf("Compressed Text %s\n", buffer_out);
    printf("Compressed size is: %lu\n", strlen(buffer_out));


    printf("Uncompression of Compressed Text %s\n", buffer_final);
    printf("Uncompression of Compressed size is: %lu\n", strlen(buffer_final));

    printf("All done");


    return EXIT_SUCCESS;
}