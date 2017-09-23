#include <stdio.h>
#include <unistd.h>

int main()

{

    float input = 1;

clear_scr:

    {

    printf("\033[0d\033[2J");

    }

output_scr:

    {

do

    {

    printf(" %.0f s \n ", input ); //s = seconds
    sleep(1);
    input++;

    }
 
while

    ( input !=0 );

goto output_scr;

    }

}
