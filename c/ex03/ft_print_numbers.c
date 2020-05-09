#include <unistd.h>

void ft_print_numbers(void);
char number;

int main(){

	ft_print_numbers();

}

void ft_print_numbers(void){
	
	number = '0';
	
	while(number < 58){
		write(1, &number, 1);
		number = number + 1;
	
	}

}
