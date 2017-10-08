#include <stdio.h>
#include <unistd.h>

#define clean() fputs("\033[0d\033[2J", stdout);
#define curs_on() fputs("\e[?25h", stdout);
#define curs_off() fputs("\e[?25l", stdout);


void grafic()

{

printf("                   \n");
printf("    00        00   \n");
printf("    00        00   \n");
printf("         00        \n");
printf("         00        \n");
printf("    00        00   \n");
printf("     00      00    \n");
printf("      00000000     \n");

}



void part_1()

{

    printf("This is part 1 \n");

}



void part_2()

{

    printf("This is part 2 \n ");

}


int main()

{
    
    clean();
    curs_off();

    part_1();
    grafic();
    sleep(1);

    part_2();
    grafic();
    sleep(2);

    printf("Press enter to exit \n");

    getchar();

    curs_on();
    clean();


    return 0;

}
