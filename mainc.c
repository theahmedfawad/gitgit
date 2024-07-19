#include <stdio.h>

extern void print_hex(unsigned char *data, int len);

void main(void)
{
        unsigned char natural_nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        printf("Natural Numbers:\n");
        print_hex(natural_nums, 10);
}