Run: Main
	./Main

Main: Main.o Functions.o
	g++ Main.o Functions.o -o Main

Main.o: Main.cpp
	g++ -c Main.cpp

BubbleSort: Bubble
	./Bubble

Bubble: Bubble.o Functions.o
	g++ Bubble.o Functions.o -o Bubble

Bubble.o: BubbleSort/Bubble.cpp
	g++ -c BubbleSort/Bubble.cpp

InsertionSort: Insertion
	./Insertion

Insertion: Insertion.o Functions.o
	g++ Insertion.o Functions.o -o Insertion

Insertion.o: InsertionSort/Insertion.cpp
	g++ -c InsertionSort/Insertion.cpp

QuickSort: Quick
	./Quick

Quick: Quick.o Functions.o
	g++ Quick.o Functions.o -o Quick

Quick.o: QuickSort/Quick.cpp
	g++ -c QuickSort/Quick.cpp

RandomSort: Random
	./Random

Random: Random.o Functions.o
	g++ Random.o Functions.o -o Random

Random.o: RandomSort/Random.cpp
	g++ -c RandomSort/Random.cpp

Functions.o: Functions/Functions.cpp
	g++ -c Functions/Functions.cpp

clean:
	rm *.o

spotless:
	rm *.o
	rm Main.exe