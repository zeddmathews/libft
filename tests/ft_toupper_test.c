#include <stdio.h>
#include <ctype.h>
#include "../includes/libft.h"

int main () {
   int i = 0;
   char str[] = "tutorials point";
	
   while( str[i] ) {
      putchar(ft_toupper(str[i]));
      i++;
   }
   
   return(0);
}

//  TUTORIALS POINT
