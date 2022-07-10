  .text

  .globl foo
foo:
  jmp *fptrs(%rip)

  .globl bar
bar:
  jmp *fptrs+8(%rip)

  .globl baz
baz:
  jmp *fptrs+16(%rip)