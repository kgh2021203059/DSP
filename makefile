calender.out : calender.c
	g++ calender.c -o calender.out -lncurses
main:
	g++ calender_main.c -o calender_main.out -lncurses
