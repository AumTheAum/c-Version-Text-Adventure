game: main.o menu.o room1.o
	gcc main.o menu.o room1.o -o game

main.o: main.c
	gcc -c main.c

menu.o: menu.c
	gcc -c menu.c

room1.o: room1.c
	gcc -c room1.c



clean:
	rm *.o game
