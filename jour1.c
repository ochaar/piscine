#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_alphabet(void)
{
    int lettre;
    lettre= 'a';
    while (lettre <='z')
    {
        ft_putchar(lettre);
        lettre++;
    }
    
}

void ft_print_reverse_alphabet(void)
{
    int lettre;
    lettre= 'z';
    while (lettre >='a')
    {
        ft_putchar(lettre);
        lettre--;
    }
    
}

void ft_print_numbers(void)
{
    int nombre;
    nombre= '0';
    while (nombre <='9')
    {
        ft_putchar(nombre);
        nombre++;
    }
    
}

void ft_is_negative(int n)
{
    if (n<0)
    {
        ft_putchar('N');
    }
    else
    {
        ft_putchar('P');
    }
}

void ft_print_comb(void)
{
    int number1='0';
    int number2='0';
    int number3='0';
    


    while (number1<='9')
    {
        if ((number1<number2) && (number2<number3))
        {
            ft_putchar(number1);
            ft_putchar(number2);
            ft_putchar(number3);
            if (number1 != 7)
                ft_putchar(',');
            if (number1 != 7);
                ft_putchar(' ');
            
        }

        if (number3 > '8')
        {
            number3='0';
            number2++;
        }

        if (number2 > '9')
        {
            number2='0';
            number1++;
        }
        number3++;
    }
}

void ft_putnbr(int nb)
{
    int compt;

    compt=0;
    while (nb[comp]!='\0')
    {
        ft_putchar(nb[compt]);
        compt++;
    }
    
}

void ft_putstr(char *c)
{
    int compt;
    
    compt = 0;

    while (c[compt] != '\0')
    {
        ft_putchar(c[compt]);
        compt++;
    }
}

int ft_strlen(char *c)
{
    int compt;
    
    compt = 0;

    while (c[compt] != '\0')
    {
        compt++;
    }
    return (compt);
}
int main ()
{
    void ft_putchar(char c);
    void ft_print_alphabet();
    void ft_print_numbers(void);
    void ft_is_negative(int n);
    void ft_print_comb(void);
    void ft_putnbr(int nb);
    ft_putnbr(42);
    printf("\n");
    
    return(0);
}