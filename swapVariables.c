
#include<stdio.h>
#include<stdlib.h>


int main(){

//strings are being declared below 
char *string1 = malloc(sizeof(char) * 10000000);

char *string2 = malloc(sizeof(char) * 10000000);

//user input for first string
printf("Please enter first sentence: ");
scanf("%[^\n]%*c",string1);

//user input for second string
printf("Please enter second sentence: ");
scanf("%[^\n]%*c",string2);


printf("\n");

//conditions being applied for swapping sentences
string1=string1+(string1-string2);

string2=string1-(string1-string2)/2;

string1=string1-(string1-string2)*2;



printf("\nSwapping first sentence : %s ",string1);
printf("\nSwapping second sentence : %s \n",string2);

return 0;

}