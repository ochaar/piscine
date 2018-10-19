#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *c)
{
    int i;

    i = 0;
    while (c[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int     i;
    int     len;
    char    *copy;

    len = ft_strlen(src);
    if (!(copy = (char*)malloc(sizeof(*copy) * (len + 1))))
        return (0);
    i = 0;
    while (i < len)
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char    ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;
    char            *last;

    i = 0;
    last = dest;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (*last);
}

char    *ft_strcat(char *dest, char *src)
{
    ft_strcpy(&dest[ft_strlen(dest)], src);
    return (dest);
}

char    *ft_strncat(char *dest, char *src, int nb)
{
    char    *first;

    first = dest;
    dest = &dest[ft_strlen(dest)];
    while (*src != '\0' && nb > 0)
    {
        *dest++ = *src++;
        nb--;
    }
    *dest = 0;
    return (first);
}

char    *ft_strchr(char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    return (0);
}

char    *ft_strrchr(char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i > -1)
    {
        if (s[i] == c)
            return (&s[i]);
        i--;
    }
    return (0);
}
char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && str [i + j] != '\0')
            j++;
        if (j == ft_strlen(to_find))
            return (&str[i]);
        i++;
    }
    return (0);
}

char    *ft_strnstr(char *str, char *to_find, int n)
{
    int i;
    int j;

    i = 0;
    while (str[i] && i < n)
    {
        j = 0;
        while (str[i + j] == to_find[j] && str [i + j] != '\0')
            j++;
        if (j == ft_strlen(to_find))
            return (&str[i]);
        i++;
    }
    return (0);
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((s1[i] - s2[i]));
        i++;
    }
    return ((s1[i] - s2[i]));
}

int     ft_strncmp(char *s1, char *s2, int n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && i < n-1)
    {
        if (s1[i] != s2[i])
            return ((s1[i] - s2[i]));
        i++;
    }
    return ((s1[i] - s2[i]));
}

int     ft_atoi(char *str)
{
    int i;
    int negativ;
    int result;

    i = 0;
    negativ = 1;
    result = 0;
    while (str[i] < 32 && str[i])
        i++;
    if (str[i] == '-')
    {
        negativ = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * negativ);
}

int     ft_isalpha(int c)
{
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
        return (1);
    return (0);
}

int     ft_isdigit(int c)
{
    if (c < 48 || c > 57)
        return (0);
    return (1);
}

int     ft_isalnum(int c)
{
    if ((ft_isdigit(c) == 1) || (ft_isalpha(c) == 1))
        return (1);
    return (0);
}

int     ft_isascii(int c)
{
    if (c >= 0 && c < 128)
        return (1);
    return (0);
}

int     ft_isprint(int c)
{
    if (c < 32 || c > 126)
        return (0);
    return (1);
}

int     ft_toupper(int c)
{
    if (c > 96 && c < 123)
        return (c - 32);
    return (c);
}

int     ft_tolower(int c)
{
    if (c > 64 && c < 91)
        return (c + 32);
    return (c);
}

int     main(void)
{
    char *str = "saluta";
    char *c = "salautation";
    int result = 1454;
    printf("%d\n", tolower(result));
    printf("%d\n", ft_tolower(result));
}