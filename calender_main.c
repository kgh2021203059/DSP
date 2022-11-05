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
	//start_color();
	//init_pair(1, COLOR_WHITE, COLOR_BLACK);
	refresh();
	input_ym = newwin(18,50,0,0);
	wbkgd(input_ym,COLOR_PAIR(1));

	wborder(input_ym,0,0,0,0,0,0,0,0);
	mvwhline(input_ym,2,1,'-',48);
	wrefresh(input_ym);
	refresh();
	getch();

	endwin();
	return 0;
}
