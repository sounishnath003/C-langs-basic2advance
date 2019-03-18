#include"stdio.h"
#include "conio.h"
  void main()
  {
  char c;

//the input happens here!!
scanf(" %c the keyboard entry is:",&c);
    if(c>"a"&& c<"z")

    {
      printf(" this is alphabet: %c",c);
      }
      else
      printf(" not an alphabet %c",c);
    }
    getch();
}
