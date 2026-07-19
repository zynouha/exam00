#include <unistd.h>
void ft_putchar(char n)
{
	write(1,&n,1);
}
void separ(int a, int b, int c)
{

	if (a != '7')
		write(1,", ",2);
}

void ft_print_comb(void)
{
	int a = 48;
	int b;
	int c;

	
	while (a <= 55)
	{
		b = a + 1;

		while ( b <= 56)
		{
			c = b + 1;

			while( c <= 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				separ(a,b,c);
				c++;
			}
			b++;
		}
		a++;
	}
}
int main(){

	ft_print_comb();
	return 0;
}
