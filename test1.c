#include <stdio.h>
#include <unistd.h>
#define clear() printf("\033[0d\033[2J");

int a = 5;
int b = 55;
int memory1, memory2, memory3, memory4; 


int main()

{

    clear();

    plus_scr:
   
    {

    memory1 = a + b;

    printf(" a + b = %d \n", memory1);
    sleep(1);
    printf("Нажмите enter для продолжения \n");
    getchar();

    goto minus_scr;
   
    }

    minus_scr:

    {

    memory2 = b - a;

    printf(" b - a = %d \n", memory2);
    sleep(1);
    printf("Нажмите enter для продолжения \n");
    getchar();

    goto multi_scr;

    }

    multi_scr:
    
    {

    memory3 = a * b;

    printf(" b * a = %d \n", memory3);
    sleep(1);
    printf("Нажмите enter для продолжения \n");
    getchar();

    goto div_scr;
    
    }

    div_scr:

    {

    memory4 = b / a;

    printf(" b : a = %d \n", memory4);
    sleep(1);

    }

    printf("Нажмите enter для завершения программы \n");

    getchar();

    sleep(1);
    clear();

}