all:
	gcc -g -Wall -fPIC -shared lib.c -o lib.so
	gcc -g -Wall main.c trampolines.S -ldl

clean:
	rm a.out && rm lib.so