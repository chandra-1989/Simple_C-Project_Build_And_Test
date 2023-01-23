#include <gtest/gtest.h>
#include <compress/compress.h>
#include<string.h>


TEST(compression_test, simple_test)
{
    char buffer_in [256] = {"Hello World!!!"};
    char* buffer_out = compress(buffer_in);
    char* buffer_final = decompress(buffer_out);

    int res = strcmp(buffer_in, buffer_final);

    ASSERT_EQ(res,0);
}