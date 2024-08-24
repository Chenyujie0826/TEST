CC=g++

test.out:main.cpp
	$(CC) main.cpp -o test.out

clean:
	rm test.out
