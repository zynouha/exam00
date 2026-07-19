#include <unistd.h>
void	ft_print_alphabet(void);

void 	ft_print_alphabet(void)
{
	int i = 97; //mn 97 l 122
	
	while (i <= 122){
		write(1,&i,1);
		i++;
	}
}
int main()
{
	ft_print_alphabet();
	return 0;
}
