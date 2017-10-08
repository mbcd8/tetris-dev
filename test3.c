#include <stdio.h>
#include <unistd.h>

#define clear() fputs("\033[0d\033[2J", stdout);
#define cur_off() fputs("\e[?25l", stdout);
#define cur_on() fputs("\e[?25h", stdout);

int main()

{

clear();
cur_off();
printf("cursor off \n");
sleep(1);
printf("cursor off \n");
sleep(1);
printf("cursor off \n");
sleep(5);
cur_on();
printf("cursor on \n");
sleep(1);
printf("cursor on \n");
sleep(1);
printf("cursor on \n");
sleep(5);
clear();

return 0;

}