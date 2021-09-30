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


  unsigned int u = 12345678;
  int *u_int = &u;
  char *u_char = &u;

  printf("u_int: %p u_int points to %u\n",u_int,*u_int);
  printf("u_char: %p u_char points to %u\n",u_char,*u_char);
  printf("hex: %x  dec: %u\n\n",u,u);

  int count;
  char *temp;
  for (count = 0; count < 4; count++){
    temp = u_char + count;
    printf("dec byte %d: %hhu\n",count+1,*temp);
    printf("hex byte %d: %hhx\n\n",count+1,*temp);
  }

//step 10
  printf("\nstep 10\n");

  for (count = 0; count < 4; count++){
    temp = u_char + count;
    printf("dec byte %d: %hhu\n",count+1,*temp+1);
    printf("hex byte %d: %hhx\n\n",count+1,*temp+1);
  }

//step 11
  printf("\nstep 11\n");
  for (count = 0; count < 4; count++){
    temp = u_char + count;
    printf("dec byte %d: %hhu\n",count+1,*temp+16);
    printf("hex byte %d: %hhx\n\n",count+1,*temp+16);
  }
}
