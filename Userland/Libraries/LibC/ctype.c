
#include <ctype.h>

int isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int isalpha(int c)
{
    return isupper(c) || islower(c);
}

int isalnum(int c)
{
    return isalpha(c) || isdigit(c);
}

int isxdigit(int c)
{
    return isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

int isspace(int c)
{
    return (c >= 0x09 && c <= 0x0D) || c == ' ';
}

int isblank(int c)
{
    return c == '\t' || c == ' ';
}

int iscntrl(int c)
{
    return (c >= 0x00 && c <= 0x1F) || c == 0x7F;
}

int isgraph(int c)
{
    return c >= 0x21 && c <= 0x7E;
}

int isprint(int c)
{
    return isgraph(c) || c == ' ';
}

int ispunct(int c)
{
    return (c >= 0x21 && c <= 0x2F) || (c >= 0x3A && c <= 0x40) || (c >= 0x5B && c <= 0x60) || (c >= 0x7B && c <= 0x7E);
}

int isascii(int c)
{
    return (c >= 0x0 && c <= 0x7F);
}

int tolower(int c)
{
    return isupper(c) ? c + 32 : c;
}

int toupper(int c)
{
    return islower(c) ? c - 32 : c;
}