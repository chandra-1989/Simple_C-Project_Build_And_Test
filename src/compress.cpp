#include <compress/compress.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <zlib.h>


char* compress(char* data){

    char* buffer_out  = new char[256];
    z_stream defstream;
    defstream.zalloc = Z_NULL;
    defstream.zfree = Z_NULL;
    defstream.opaque = Z_NULL;
    defstream.avail_in = (uInt) strlen(data);
    defstream.next_in = (Bytef *) data;
    defstream.avail_out = (uInt) sizeof(buffer_out);
    defstream.next_out = (Bytef *) buffer_out;

    deflateInit(&defstream, Z_BEST_COMPRESSION);
    deflate(&defstream, Z_FINISH);
    deflateEnd(&defstream);     

    return buffer_out; // TODO::use alloc/malloc
}

char* decompress(char* compressed_data){
    char* buffer_final  = new char[256];

    z_stream inflat_stream;
    inflat_stream.zalloc = Z_NULL;
    inflat_stream.zfree = Z_NULL;
    inflat_stream.opaque = Z_NULL;
    inflat_stream.avail_in = (uInt) strlen(compressed_data);
    inflat_stream.next_in = (Bytef *) compressed_data;

    inflat_stream.avail_out = (uInt) sizeof(buffer_final);
    inflat_stream.next_out = (Bytef *) buffer_final;
    inflateInit(&inflat_stream);
    inflate(&inflat_stream, Z_FINISH);
    inflateEnd(&inflat_stream);

    return buffer_final;  // TODO::use alloc/malloc

}