main: src/main.c src/Implementation.c
	gcc -g src/main.c src/Implementation.c -o LinkedList
	./LinkedList
	rm LinkedList

tests-github: src/tests.c src/Implementation.c
	gcc -g src/tests.c src/Implementation.c  -o LinkedListTests -lcriterion
	./LinkedListTests --verbose

test: src/tests.c src/Implementation.c
	gcc -g src/tests.c src/Implementation.c  -o LinkedListTests -lcriterion
	./LinkedListTests --verbose
	rm LinkedListTests