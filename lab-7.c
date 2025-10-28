#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int VA = 32, page_size = 4096, bits = 12;
        char *endptr;

        unsigned long vaddr = strtoul(argv[1], &endptr, 10);

        if (*endptr != '\0') {
            printf("Usage: ./program <virtual address (decimal)>\n");
            return 1;
        }

        unsigned long page_number = vaddr >> bits;
        unsigned long offset = vaddr & (page_size - 1);

        printf("VA Size[%d] Bits\n", VA);
        printf("Page Size is [4KB][%d bits]\n", bits);
        printf("The address [%lu]=[%lXh] contains:\n", vaddr, vaddr);
        printf("page number=[%lu]=[%lXh]\n", page_number, page_number);
        printf("offset=[%lu]=[%lXh]\n", offset, offset);
    }
    else
    {
        printf("Usage: ./program <virtual address (decimal)>\n");
    }
    return 0;
}

/*
(base) artcs@artcs:~/Desktop/$ ./prog
Usage: ./program <virtual address (decimal)>
(base) artcs@artcs:~/Desktop/$ ./prog 7
VA Size[32] Bits
Page Size is [4KB][12bits]
The address [7] = [7h] contains:
page number = [0] = [0h]
offset = [7] = [7h]
(base) artcs@artcs:~/Desktop/$ ./prog 70325
VA Size[32] Bits
Page Size is [4KB][12bits]
The address [70325] = [112B5h] contains:
page number = [17] = [11h]
offset = [693] = [2B5h]
*/
