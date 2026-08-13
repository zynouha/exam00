#include <unistd.h>
void ft_putnbr(unsigned int n){
	char c;
	if(n <= 9){
		c = n + '0';
		write(1,&c,1);
	}
	else if(n > 9){
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
int main(int argc, char **argv){
	int i;
	char c;
	int k;

	if(argc != 2){
		write(1,"\n",1);
	}
	
	i = 0;
	while(argv[1][i]){
		k = 1;
		while(argv[1][i] && argv[1][i] == argv[1][i+1]){
			k++;
			i++;
		}
		if(k <= 9){
			c = k + '0';
			write(1,&c,1);
			write(1,&argv[1][i],1);
		}
		else if(k > 9){
			ft_putnbr(k);
			write(1,&argv[1][i],1);
		}
		i++;
	}
	write(1,"\n",1);
	return(0);
}
