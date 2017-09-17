#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>

#define clear_term() printf("\033[0d\033[2J"); 
#define clear_box() printf("\033[?12l");

#define setx_null() getx = 0;
#define sety_null() gety = 0;






#define action() getch();
 
int main(int argc, char *argv[])

{

int getx, gety;

getx = 10;
gety = 20;


void clear_scr()

{

clear_box();

}


void about_box()


{




}



menu_win:

{

    clear_term();          // clearing screen.


    WINDOW *main_win;      // main window.
    WINDOW *menu_win;      // options and settings window.
    WINDOW *box_win;       // dialog box for the menu output.


    char list[4][8] = { "Start", "empty", "About", "Exit"
    };

    char item[7];
    int choice;
    int position = 0;
    int width = 7;
    

    initscr();
    curs_set(0);
    start_color();
    use_default_colors();
    
    noecho();
    curs_set(FALSE);

    main_win = newwin( 24, 42, 0, 0 );
    menu_win = newwin( 22, 40, 1, 1 ); 
    
    box( main_win, 0, 0 );
    box( menu_win, 0, 0 );      

for
        ( position = 0; position < 4; position++ )

    {

if
        ( position == 0 )
          
        wattron( menu_win, A_STANDOUT );

else

        wattroff( menu_win, A_STANDOUT );
        sprintf( item, "%-5s",  list[position]);
        mvwprintw( menu_win, position + 1, gety, "%s", item );

    }

        wrefresh( main_win ); 
        wrefresh( menu_win );
 
        position = 0;
      
        noecho();
        keypad( menu_win, TRUE );
        curs_set( 0 );
     
while
       (( choice = wgetch( menu_win )) != 'q' )

 { 
 
       sprintf( item, "%-5s",  list[position] ); 
       mvwprintw( menu_win, position + 1, gety, "%s", item ); 
              
switch ( choice )
    
    { 

case KEY_UP:

      position--;
      position = ( position < 0 ) ? 3 : position;

break;

case KEY_DOWN:

      position++;
      position = ( position > 3 ) ? 0 : position;

break;

    }
           
      wattron( menu_win, A_STANDOUT );
            
      sprintf( item, "%-5s",  list[position] );
      mvwprintw( menu_win, position + 1, gety, "%s", item );
      wattroff( menu_win, A_STANDOUT );

 }
       
      delwin( menu_win );
      delwin( main_win );
      endwin();

}



    
game_win:

{

    int hour, minute, second;
    int posx, posy;
    int choice;

    hour = minute = second = 0;
    posy = 1;
    posx = 1;
 
    WINDOW *main_win = initscr();          
    WINDOW *player1_win, *player2_win;



//  WINDOW *score1_win, *score2_win; 
    




   



    init_pair( 1, COLOR_BLACK, COLOR_YELLOW );
    init_pair( 2, COLOR_BLACK, COLOR_CYAN );
    

    refresh();
    
    

    main_win = newwin( 24, 42, 0, 0 );
    player1_win = newwin( 20, 20, 2, 1 );   
    player2_win = newwin( 20, 20, 2, 21 );

    refresh();

print_scr:

    {

    box( main_win, 0, 0 );
    box( player1_win, 0, 0 );
    box( player2_win, 0, 0 );



        


    wattron(main_win, COLOR_PAIR(1));

    mvwprintw(main_win, 1, 8, "PLAYER 1");

    wattroff(main_win, COLOR_PAIR(1));



    wattron(main_win, COLOR_PAIR(2));

    mvwprintw(main_win, 1, 26, "PLAYER 2");

    wattroff(main_win, COLOR_PAIR(2));



    mvwprintw(main_win, 22, 17, "%02d:%02d:%02d", hour, minute, second);


//-------------------------------------------------

    wattron(player1_win, COLOR_PAIR(1));

    mvwprintw(player1_win, posy, posx, "  ");
    mvwprintw(player1_win, posy + 1, posx, "  ");

    wattroff(player1_win, COLOR_PAIR(1));

//-------------------------------------------------



//-------------------------------------------------

    wattron(player2_win, COLOR_PAIR(2));


    mvwprintw(player2_win, posy - 1, posx + 5, "  ");
    mvwprintw(player2_win, posy, posx + 5, "      ");


    wattroff(player2_win, COLOR_PAIR(2));

//-------------------------------------------------
    
    }

timer_scr:


    { 

if
    ( second == 60 )

        {
   
    minute += 1;
    second = 0;

        }

if
    ( minute == 60 )

        {
        
        hour += 1;
        minute = 0;

        }

if
    ( hour == 24 )
       
        {
        
        hour == 0;
        minute == 0; 

        }
}

border_scr:

{

for
    ( posy == 17; posy > 17;)
   
    {

    posy = 2;

    }

}



wrefresh_scr:


    {

    wrefresh(main_win);
    wrefresh(player1_win);
    wrefresh(player2_win);   
  
    sleep(1);
   
    wclear(player1_win);
    wclear(player2_win);

    second++;
    posy++;







    {  


goto print_scr;

/*


    case KEY_UP:

//  flip_figure();

cbreak();     

    
    case KEY_DOWN:

    posy++;

cbreak();

    case KEY_RIGHT:

    posx++;

cbreak();

    case KEY_LEFT:

    posx--;

cbreak(); 

    }
}

*/




goto exit_scr;

    }    
    

exit_scr:

    {
   
    delwin(main_win);
    delwin(player1_win);
    delwin(player2_win); 

    endwin();

    }

    } 
    
    return 0;

    } 

}
