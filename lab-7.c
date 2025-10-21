#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int VA = 32, page_size = 4096, bits = 12;
        unsigned int vaddr = atoi(argv[1]);
        //TODO
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
