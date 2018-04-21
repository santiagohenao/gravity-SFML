all:gravity
	./gravity

gravity:main.o
	g++ main.o -o gravity -lsfml-graphics -lsfml-window -lsfml-system

main.o:main.cpp
	g++ -c main.cpp

clean:
	rm -f *.o gravity
