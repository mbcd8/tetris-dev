#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>

#define clean() fputs("\033[0d\033[2J", stdout);

int main()

{

clean();
initscr();
    
printf("Введи символы и они будут печататься \n ");
sleep(5);
clean();

printf("А сейчас символы не будут печататься \n ");
sleep(5);

clean();

echo();

return 0;



}
