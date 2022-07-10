#include <stdio.h>

void foo(int x) {
  printf("Called library foo: %d\n", x);
}

void bar(int x) {
  printf("Called library baz: %d\n", x);
}

void baz(int x) {
  printf("Called library baz: %d\n", x);
}