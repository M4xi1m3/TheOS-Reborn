#include <string.h>

void* memset(void* ptr, int value, size_t count)
{
    uint8_t* buf = (uint8_t*) ptr;
    for (size_t i = 0; i < count; ++i)
        buf[i] = (uint8_t) value;

    return ptr;
}

void* memsetw(void* ptr, int value, size_t count)
{
    uint16_t* buf = (uint16_t*) ptr;
    for (size_t i = 0; i < count; ++i)
        buf[i] = (uint16_t) value;

    return ptr;
}

size_t strlen(const char* str)
{
    size_t len = 0;
    while (str[len] != '\0')
        len++;

    return len;
}