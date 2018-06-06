#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr=42;
}

void ft_ultimate_ft(int *********nbr)
{
    *********nbr=42;
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div=0;
    *mod=0;
    int resultat = a/b;
    int reste = a%b;
    div= &resultat;
    mod= &reste;
    
}

void ft_ultimate_div_mod(int *a, int *b)
{
    int tempo= *a;
    *a= *a/ *b;
    *b= tempo% *b;
}

void ft_putchar(char c)
{
    write (1, &c, 1);
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

void ft_swap(int *a, int *b)
{
    int tempo= *a;
    *a= *b;
    *b= tempo;
}

char *ft_strrev(char *str)
{
    char reverse;
    int compt=0;
    int taille= ft_strlen(str)-1;
    while (compt<taille)
    {
        reverse=str[taille];
        str[taille]=str[compt];
        str[compt]=reverse;
        compt++;
        taille--;
    }
    return (str);

}

int ft_atoi(char *str)
{
    int i=0;
    int nombre=0;
    int negatif=0;

    while (str[i]!='\0')
    {
        if (str[i] >= '0' && str[i]<= '9')
        {
            nombre *= 10;
            nombre += (str[i]-48);
        }
        i++;

        if (str[i]=='-')
            negatif=1;
    }
    if (negatif==1)
        return (-nombre);
    else
        return (nombre);
}


int ft_sort_integer_table(int *tab, int size)
{
    int i=0;
    int temp;
    printf("%d\n",*tab);
    while (i<size)
    {
        if (tab[i]>tab[i+1])
        {
            temp= tab[i+1];
            tab[i+1]=tab[i];
            tab[i]=temp;
            i=0;
        }
        else 
            i++;

    }
    printf("%d\n",*tab);
    return (*tab);
}

int main ()
{
    void ft_div_mod(int a, int b, int *div, int *mod);
    void ft_ultimate_div_mod(int *a, int *b);
    void ft_putstr(char *c);
    int ft_strlen(char *c);
    void ft_swap(int *a, int *b);
    char *ft_strrev(char *str);
    int ft_atoi(char *str);
    int ft_sort_integer_table(int *tab, int size);
    int tableau[6]={4,5,5,9,8,3};
    int *test=tableau;
    int x=ft_sort_integer_table(test,5);
}