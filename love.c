#include <stdio.h>
#include <unistd.h>

#define cursor_off() fputs("\e[?25l", stdout);
#define cursor_on() fputs("\e[?25h", stdout);
#define clear() fputs("\033[0d\033[2J", stdout);

void print_scr()

	{

	printf("%c I love You %c" , 0x09 ,0x09);
	printf("I love You %c", 0x0a);

}

void exit_scr()

	{

        clear();
	cursor_on();

}

int main()

{

	int love;

	cursor_off();
	clear();

do
	{
	
	print_scr();	
	love++;

	}

while

	( love <= 12 );

	getchar();
	exit_scr();
	
	return 0;

}
