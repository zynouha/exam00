#include <unistd.h>
void	ft_alpha_reverse(void)
{
	char c = 'z';
	while(c >= 'a'){
		write(1,&c,1);
		c--;
	}
}
int main()
{
	ft_alpha_reverse();
	return 0;
}
