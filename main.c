#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int c)
{
    if (c > 9)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
	{
		ft_putchar(c + '0');
	}
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_romanToInt(char* s)
{
    int i = 0;
    int a = 0;

    while(s[i] != '\0')
    {
        if(s[i] == 'I')
        {
            if (s[i] == 'I' && s[i + 1] == 'V')
            {
                a = a + 4;
                i++;
            }
            else if (s[i] == 'I' && s[i + 1] == 'X')
            {
                a = a + 9;
                i++;
            }
            else if (s[i] == 'I')
                a = a + 1;
        }
        else if(s[i] == 'V')
            a = a + 5;
        else if(s[i] == 'X')
        {
            if (s[i] == 'X' && s[i + 1] == 'L')
            {
                a = a + 40;
                i++;
            }
            else if(s[i] == 'X' && s[i + 1] == 'C')
            {
                a = a + 90;
                i++;
            }
            else if(s[i] == 'X')
                a = a + 10;
        }
        else if(s[i] == 'L')
            a = a + 50;
        else if(s[i] =='C')
        {
            if(s[i] == 'C' && s[i + 1] == 'D')
            {
                a = a + 400;
                i++;
            }
            else if (s[i] == 'C' && s[i + 1] == 'M')
            {
                a = a + 900;
                i++;
            }
            else if(s[i] =='C')
                a = a + 100;
        }
        else if(s[i] == 'D')
            a = a + 500;
        else if(s[i] == 'M')
            a = a + 1000;
        else
        {
            ft_putstr("You add an invalided roman number");
            return 0;
        }
        i++;
    }
    return a;
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        ft_putnbr(ft_romanToInt(argv[1]));
        ft_putchar('\n');
    }
    else if(argc == 1)
    {
        ft_putstr("You need to add the roman number as an argument");
        ft_putchar('\n');
    }
    else
    {
        ft_putstr("You can just add one roman number");
        ft_putchar('\n');
    }
}
