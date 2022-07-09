all:
	make shared static_main shared_main 
static_main: 
	gcc -g -Wall -o static_main static_main.c -ldl
shared_main:
	gcc -g -Wall -o shared_main shared_main.c libbar.so -ldl
shared:
	gcc -g -Wall -fPIC -shared -o libfoo.so foo.c
	gcc -g -Wall -fPIC -shared -o libbar.so bar.c
clean:
	rm *_main && rm *.so
