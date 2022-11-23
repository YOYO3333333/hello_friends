#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Hello World!\n");
    }
    else
    {
        int i = 1;
        while (i < argc)
        {
            printf("Hello %s!\n", argv[i]);
            i++;
        }
    }
    return 0;
}
