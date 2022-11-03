#include <ncurses.h>

int main(){
	initscr();
	noecho();
	WINDOW * input_ym;
	if(has_colors()==FALSE){
		puts("Terminal does not support colors!");
		endwin();
		return -1;
	}
	start_color();
	init_pair(1,COLOR_BLUE,COLOR_WHITE);
	move(8,0);
	refresh();
	input_ym = newwin(7,80,0,0);
	wbkgd(input_ym,COLOR_PAIR(1));
	wmove(input_ym,3,15);
	wprintw(input_ym,"Input the date to edit:");
	wrefresh(input_ym);
	getch();
	/*while input until input done*/
	char date[10] = "2022-11";
	mvwprintw(input_ym,3,15+24,date);
	wrefresh(input_ym);
	getch();
	endwin();
	return 0;
}
