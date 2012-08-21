# makefile

CC = gcc 

sort_test: main.o heapsort.o quicksort.o
	$(CC) main.o heapsort.o quicksort.o -o sort_test
heapsort.o: heapsort.c
	$(CC) -c -g heapsort.c -o heapsort.o
quicksort.o: quicksort.c    
	$(CC) -c -g quicksort.c -o quicksort.o
main.o: main.c
	$(CC) -c -g main.c -o main.o
clean:
	rm *.o
