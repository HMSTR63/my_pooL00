
#include <unistd.h>

int main()
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}


//==========================================================================================//


/*#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    int i;

    i = 97;

    while(i <= 122)
    {
        if(i % 2 == 0)
        {
            ft_putchar(i - 32);
        }
        else 
        {
            ft_putchar(i);
        }
        i++;
    }
    ft_putchar('\n');

    return 0;

}*/
