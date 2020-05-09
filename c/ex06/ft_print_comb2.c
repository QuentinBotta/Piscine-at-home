#include <unistd.h>

void ft_print_comb2(void);

int main(){

ft_print_comb2();

}


void ft_print_comb2(void){
	char a;
	char b;
	char c;
	char d;

	int thousand;
	int hundreds;
	int tens;
	int unit;

	thousand = 0;

	while(thousand < 10){
		
		while(hundreds < 10){
			tens = thousand;
			unit = hundreds + 1;
			while(tens < 10){
				while(unit < 10){

					a = '0' + thousand;
					b = '0' + hundreds;
					c = '0' + tens;
					d = '0' + unit;

					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d, 1);
					write(1, ", ", 2);

					unit ++;
				}
				unit = 0;
				tens ++;
			}

			hundreds ++;
		}
		hundreds = 0;
		thousand ++;
	}


}
