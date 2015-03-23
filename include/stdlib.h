#ifndef _STDLIB_H
#define _STDLIB_H

#include <include/stddef.h>

int itoa (int n, char* str);
int atoi (char* str);

void* memset (void*, int, size_t);
int memcmp (const void*, const void*, size_t);
void* memcpy (void*, const void*, size_t);

#endif /* _STDLIB_H */
