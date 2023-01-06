#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

enum md5_magic {
        MD5_DIGEST_LEN = 16,
        MD5_STRING_LEN = 33,
};

struct md5_context {
	uint64_t size;        // Size of input in bytes
	uint32_t buffer[4];   // Current accumulation of hash
	uint8_t input[64];    // Input to be used in the next step
	uint8_t digest[16];   // Result of algorithm
};

void md5Init(struct md5_context *ctx);
void md5Update(struct md5_context *ctx, uint8_t *input, size_t input_len);
void md5Finalize(struct md5_context *ctx);
void md5Step(uint32_t *buffer, uint32_t *input);

void
md5_from_string(const char *input, struct md5_context* ctx);

void*
md5_from_file(FILE *file, struct md5_context* ctx);

void
md5_print(const struct md5_context* ctx);

void
md5_sprint(const struct md5_context* ctx, char* s);
