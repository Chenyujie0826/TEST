CC=g++

test.out:T.o main.o
	$(CC) main.o T.o -o test.out

T.o:T.cpp
	$(CC) -c T.cpp -o T.o

main.o:main.cpp
	$(CC) -c main.cpp -o main.o

clean:
	rm test.out
	rm main.o
	rm T.o
