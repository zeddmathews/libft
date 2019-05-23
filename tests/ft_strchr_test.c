#include <stdio.h>
#include "../libft.h"

int main () {
   char str[] = "http://www.tutorialspoint.com";
   char ch = 'a';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

/*
*   String after |.| is - |.tutorialspoint.com|
*/
