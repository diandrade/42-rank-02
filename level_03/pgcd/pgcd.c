#include <stdio.h>
#include <stdlib.h>

void ft_swap(int n1, int n2)
{
    int tmp;

    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int pgcd(int first, int second)
{
    int i;
    int highest_common;

    if (second < first)
        ft_swap(first, second);

    i = 0;
    highest_common = 1;
    while (i++ < second)
    {
        if (first % i == 0 && second % i == 0)
            highest_common = i;
    } 
    return (highest_common);
}

int main(int argc, char **argv)
{
    if (argc == 3)
        printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
    printf("\n");
}