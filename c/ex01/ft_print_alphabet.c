#include <unistd.h>
void alphabet();
char letter;
int current_position;

int main(){

alphabet();
}

void alphabet(){
letter = 'a';
current_position = 0;

	while(current_position < 25){
	write(1, &letter, 1);
	current_position = current_position +1;
	letter = letter +1;
	}
}
