#include <stdio.h>
#include <unistd.h>

int print_screen1()

{

    printf("    I hate You ");
    sleep(1);

}

int print_screen2()

{

    printf("    I hate You \n");
    sleep(1);
}

int final()

{

    printf("\n");

}

int main()

{
    int help;
    fputs("\033[0d\033[2J",stdout );
    fputs("\e[?25l",stdout );

do
 
    {
   
    print_screen1();
    print_screen2();
    final();
    help++;
    
    }

while
    ( help < 6  );
    
    printf("Press 'Enter' to clear ");
    getchar();
    fputs("\e[?25h",stdout );
    fputs("\033[0d\033[2J",stdout );
    return 0;

}
