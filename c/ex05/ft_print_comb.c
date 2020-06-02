#include <unistd.h>

void ft_print_comb(void);

int main() {
	ft_print_comb();
}

void ft_print_comb(void) {
	int unit;
	int tens;
	int hundreds;
	char a;
	char b;
	char c;


	hundreds = 0;
	while(hundreds < 8){
		tens = hundreds + 1;
		while(tens < 9) {
			unit = tens + 1;
			while (unit < 10) {
					a = '0' + unit;
					b = '0' + tens;
					c = '0' + hundreds;
					write(1, &c, 1);
					write(1, &b, 1);
					write(1, &a, 1);
				if (unit != 9 || tens != 8 || hundreds != 7)
					write(1, ", ",2);
				 unit ++;
			}
			tens ++;
		}
		hundreds ++;
	}
}
