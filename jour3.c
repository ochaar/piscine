#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int ft_iterative_factorial(int nb)
{
    if (nb<0 || nb >12)
        return (0);

    int compt =nb;
    if (nb==0 || nb==1)
        return 1;

    while (nb!=2)
    {
        compt= compt*(nb-1);
        nb--;
    }
    return (compt);
}

int ft_recursive_factorial(int nb)
{
    if (nb<0 || nb >12)
        return (0);

    if (nb==0 || nb==1)
        return 1;
    
    return (nb*ft_recursive_factorial(nb-1));
}

int ft_iterative_power(int nb, int power)
{
    int valeur=nb;
    if (power<0)
        return (0);

    while (power!=1)
    {
        valeur= valeur*nb;
        power--;
    }
    return (valeur);
}

int ft_recursive_power(int nb, int power)
{
    if (power<0)
        return (0);
    if (power==0)
        return (1);

    return (nb*ft_recursive_power(nb,power-1));
}

int ft_fibonacci(int index)
{
    if (index<0)
        return (-1);

    if (index==0)
        return (0);
    
    else if (index==1)
        return (1);

    else
        return (ft_fibonacci(index-1)+ft_fibonacci(index-2));

}

int ft_sqrt(int nb)
{
    int nombre=1;
    int x;
    while (nombre*nombre<=nb)
    {
        x=nombre*nombre;
        if (x==nb)
            return(nombre);
        nombre++;
    }
    return (0);
}

int ft_is_prime(int nb)
{
    int i=2;
    if (nb==0 || nb==1 )
        return (0);
    else
    {
        while (i<nb)
        {
            if (nb%i==0)
                return (0);
            else 
                i++;
        }
        return (1);
    }
}

int ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb)==0)
    {
        while (ft_is_prime(nb)==0)
        {
            nb++;
        }
    }
    return (nb);
}

int main ()
{
    int x=ft_find_next_prime(0);
    printf("%d\n",x);
}