all: ./a.out

compRun:
	g++ -std=c++11 main.cpp LibraryItem.cpp Book.cpp -o r.out

compTest:
	g++ -std=c++11 test.cpp LibraryItem.cpp Book.cpp -o a.out

test: clean compTest; ./a.out

run: clean compRun; ./r.out

clean:
	rm -f *.out
