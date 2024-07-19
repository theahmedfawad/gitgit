#include <stdio.h>


void print_hex(unsigned char *data, int len)
{
        for (size_t i = 0; i < len; i++)
        {
                printf("0x%02X ", data[i]);
        }
        printf("\n");
}