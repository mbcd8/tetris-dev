#include <stdio.h>
#include <unistd.h>



int memory1,memory2,memory3,memory4;

int a,b;

void start()

{

    fputs("\033[0d\033[2J",stdout);
    fputs(" \e[?25l",stdout);

 
}

int finish()

{

    printf("Press enter to finish \n");

    getchar();

    printf("5 \n");
    sleep(1);
    printf("4 \n");
    sleep(1);
    printf("3 \n");
    sleep(1);
    printf("2 \n");
    sleep(1);
    printf("1 \n");
    sleep(1);
     fputs("\033[0d\033[2J",stdout);
     fputs("\e[?25h",stdout);
    return 0;
            

}


void plus()
{
    a = 342;
    b = 534;
    memory1 = a + b;

    printf("342 + 534 = %d \n", memory1);

}

void minus()

{
    a = 342;
    b = 534;
    memory2 = a - b;

    printf("342 - 534 = %d \n", memory2);

}

void multi()

{
    a = 34;
    b = 53;
    memory3 = a * b;

    printf("34 * 53 = %d \n", memory3);

}

void divi()

{
    a = 1068;
    b = 534;
    memory4 = a / b;

    printf("1068 : 534 = %d \n", memory4);

}

int main()

{
 sleep(5);
 start();
 plus();
 sleep(5);
 minus();
 sleep(5);
 multi();
 sleep(5);
 divi();
 sleep(5);
 finish();

}