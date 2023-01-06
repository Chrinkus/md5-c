#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "md5.h"

int main(void)
{
        struct md5_context ctx = { 0 };
        md5_from_string("Hello, World!", &ctx);

        char buff[MD5_STRING_LEN];
        md5_sprint(&ctx, buff);

        assert(strcmp(buff, "65a8e27d8879283831b664bd8b7f0ad4") == 0);

        // The output from the following two statements should be identical
        printf("%s\n", buff);
        md5_print(&ctx);

        return EXIT_SUCCESS;
}
