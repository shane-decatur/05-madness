#include <stdio.h>

int main(){
  char c = 'a';
  int i = 15;
  long l = 150;

  char *cp = &c;
  int *ip = &i;
  long *lp = &l;

  printf("addresses of char:\n hexadecimal: %p\n decimal: %lu\n\n",&c,&c);
  printf("addresses of int:\n hexadecimal: %p\n decimal: %lu\n\n",&i,&i);
  printf("addresses of long:\n hexadecimal: %p\n decimal: %lu\n\n",&l,&l);



  printf("char pointer: %p\n",cp);
  printf("int pointer: %p\n",ip);
  printf("long pointer: %p\n\n",lp);


  *cp = 'z';
  *ip = 30;
  *lp = 300;

  printf("char: %c\n",c);
  printf("int: %d\n",i);
  printf("long: %ld\n\n",l);


  unsigned int u = 60;
  int *u_int = &u;
  int *u_char = &u;
}
