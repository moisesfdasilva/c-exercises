#include<stdio.h>

int main(){
  /* 8bits; %c; -128 to 127*/
  char ch = 'M';
  /* 8bits; %c; 0 to 255*/
  unsigned char chA = 'm';
  /* 8bits; %c; -128 to 127*/
  signed char chB = 'm';
  printf("%c ; %c ; %c;\n", ch, chA, chB);

  /* 16bits; %i; -32,768 to 32,767*/
  int numInt = 32000;
  /* 16bits; %u; 0 to 65,535*/
  unsigned int numIntA = 32000;
  /* 16bits; %i; -32,768 to 32,767*/
  signed int numIntB  = -32000;
  printf("%i ; %u ; %i;\n", numInt, numIntA, numIntB);

  /* 16bits; %hi; -32,768 to 32,767*/
  short int numShort = 31100;
  /* 16bits; %hu; 0 to 65,535*/
  unsigned short int numShortA = 61100;
  /* 16bits; %hi; -32,768 to 32,767*/
  signed short int numShortB = -31100;
  printf("%hi ; %hu ; %hi;\n", numShort, numShortA, numShortB);

  /* 32bits; %li; -2,147,483,648 to 2,147,483,647*/
  long int numLong = 2112112112;
  /* 32bits; %lu; 0 to 4,294,967,295*/
  unsigned long int numLongA = 4112112112;
  /* 32bits; %li; -2,147,483,648 to 2,147,483,647*/
  signed long int numLongB = -2112112112;
  printf("%li ; %lu ; %li;\n", numLong, numLongA, numLongB);

  /* 32bits; %f; -3,4E-38 to 3,4E-38*/
  float numFloat = 5.556;
  /* 64bits; %lf; -1,7E-308 to 1,7E-308*/
  double numDouble = 5.556556;
  /* 80bits; %Lf; -3,4E-4932 to 3,4E-4932*/
  long double numLongDouble = 5.556556556;
  printf("%.2f ; %.2lf ; %.2Lf;\n", numFloat, numDouble, numLongDouble);

  return 0;
}