#include <stdio.h>
#include <stdlib.h>

char *strcpy(char *strDest, const char *strSrc) {
   int i = 0;
   while(strSrc[i] != 0){
       strDest[i] = strSrc[i];
       i++;
   }
   strDest[i] = 0;
   return strDest;
}

int main() {
   char src[] = "Hello World";
   char dest[100];
   //strcpy(dst, str);
   printf("String from the source src: %s\n" ,src);
   printf("The result of source string in the destination is\nThe Destination string is: %s\n",strcpy(dest,src));
   return 0;
}