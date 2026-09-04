#include <stdlib.h>

int is_blank(char c)
{
    if (c == ' ' || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int count_tokens(char *str)
{
    int count;
    int in_token;

    count = 0;
    in_token = 0;
    while (*str != '\0')
    {
        if (!is_blank(*str) && !in_token)
        {
            count++;
            in_token = 1;
        }
        else if (is_blank(*str))
            in_token = 0;
        str++;
    }
    return (count);
}

int token_size(char *str)
{
    int size;

    size = 0;
    while (str[size] != '\0' && !is_blank(str[size]))
        size++;
    return (size);
}

char **ft_split(char *str)
{
    int token_count;
    int current_token;
    int len;
    char **result;
    char *start;

    token_count = count_tokens(str);
    result = malloc((token_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    current_token = 0;
    while (current_token < token_count)
    {
        while (is_blank(*str))
            str++;
        len = token_size(str);
        start = malloc((len + 1) * sizeof(char));
        if (!start)
        {
            result[current_token] = NULL;
            return (result);
        }
        result[current_token] = start;
        while (len-- > 0)
            *start++ = *str++;
        *start = '\0';
        current_token++;
    }
    result[token_count] = NULL;
    return (result);
}