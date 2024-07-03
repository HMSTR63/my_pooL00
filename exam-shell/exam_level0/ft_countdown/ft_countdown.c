
#include <unistd.h>

int main()
{
    write(1, "9876543210\n", 11);
}

//==========================================================================================//


/*#include <unistd.h>

int main(void)
{
    char n;

    n = '9';

    while(n >= '0')
    {
        write(1, &n, 1);
        n--;
    }
    write(1, "\n", 1);

    return 0;
}*/
