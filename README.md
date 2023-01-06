# MD5

_From the original repo:_

> Takes an input string or file and outputs its MD5 hash.

I needed a small MD5 library for solving some programming challenges. This implementation was excellently written and openly licensed so it was perfect.

I made a few changes to the way that we get the hash out of the contexts and to the formatting as I'm not a fan of `typedef`-ing structs.

```
// Creation and use
struct md5_context ctx = { 0 };
md5_from_string(&ctx, "Hello, World!");

// Printing to stdout
md5_print(&ctx);

// Printing to string
char buff[MD5_STRING_LEN];
md5_sprint(&ctx, buff);
```
