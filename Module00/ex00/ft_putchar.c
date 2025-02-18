#include <unistd.h>

void	ft_putchar(char sky){ 
	
	write(1, &sky, 1);
}

int main(){
	
	ft_putchar('s');
	ft_putchar('k');
	ft_putchar('y');
	ft_putchar('\n');
	return 0;
	


}



	
