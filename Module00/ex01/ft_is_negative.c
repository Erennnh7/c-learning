 #include <unistd.h>
	
void ft_is_negative(int number){

	if (number < 0)
		write( 1, "n\n", 2);
       	else 
		write(1,  "p\n", 2 );

}

int main(){
       ft_is_negative(0);
	ft_is_negative(-5);
	
	return 0;	

}


	
