#include <stdio.h>
#include <unistd.h>

#define clear() printf("\033[0d\033[2J");

int a = 55;
int b = 5;

int memory1, memory2, memory3 ,memory4;

int main()

{

    clear();

plus_scr:

    {

    memory1 = a + b;

    printf("a + b = %d \n", memory1);
    sleep(1);
    printf("Press enter to continue");
    getchar();

    goto minus_scr;

}

minus_scr:

    { 
    
    memory2 = a - b;

    printf("a - b = %d \n", memory2);
    sleep(1);
    printf("Press enter to continue");
    getchar();

    goto multi_scr;

    }

multi_scr:

    {

    memory3 = a * b;

    printf("a * b = %d \n", memory3);
    sleep(1);
    printf("Press enter to countinue");
    getchar();

    goto div_scr;

    }

div_scr:

    {

    memory4 = a / b;

    printf("a : b = %d \n", memory4);
    sleep(1);

    }

    printf("Press enter to clear");
    getchar();

    printf("clear in \n");
    sleep(1);

    printf("3 \n");
    sleep(1);

    printf("2 \n");
    sleep(1);

    printf("1 \n");
    sleep(1);
    
    clear();

}