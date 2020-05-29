#include <unistd.h>

void ft_putnbr (int nb);
void ft_rec (int n , int t);

void    ft_putchar(char c){
        write(1, &c, 1);
}

int main(){

	ft_putnbr(42);
        ft_putchar('\n');
        ft_putnbr(4242);
        ft_putchar('\n');
        ft_putnbr(20000706);
        ft_putchar('\n');
        ft_putnbr(+2147483647);
        ft_putchar('\n');
        ft_putnbr(-2147483648);

}

void
	ft_putnbr(int nb)
{
	long n = nb;
	if(n < 0)
	{
	write(1, "-", 1);
	n = -n;
	}
	if (n > 10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10] , 1);

}

/*
ft_putnbr(852)
  -> ft_putnbr(852 / 10 = 85)
       -> ft_putnbr(85 / 10 = 8)
            -> write(8 % 10 = 8)
       -> write(85 % 10 = 5)
  -> write(852 % 10 = 2)




*/

/*void ft_putnbr (int nb){
	char c;
	int b;
	int n;
	int pow;
	int div;


	b = nb;
	n= nb;
	div = 1;
	if (b < 0) {
		write(1, "-" , 1);
		n = -b;
	}

	while (b != 0){
		b = b /10;
		pow ++;
		div = div * 10;
	}



	while(pow > 0){
			div = div / 10;
			char *numbers = "0123456789";
			c = numbers[(n / div) % 10];
			write(1, &c, 1);


			pow --;
	}


}*/
