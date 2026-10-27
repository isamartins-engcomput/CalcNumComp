all:
	gcc -ggdb -o newtonraphson newtonraphson.c -lm

clean:
	rm -f newtonraphson
