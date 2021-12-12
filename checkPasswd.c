#include<stdio.h>

#include <string.h>

int main()

{

// declaring the necessary variables.

char ch[10];
int len,pnt,new_len;

// asking user to input password

printf("Please enter a password : ");

scanf("%s", ch);

len=strlen(ch);

// checking the required condition

if(len!=10)

{

new_len=10-len;

pnt=5*new_len;

// checking the required condition

if(pnt>30)

{

// displaying the result 

printf("Deductions: %d \nThe password is unsafe! Please reset.", pnt);

}

else
 {

// displaying the result 

printf("The password is safe.\n");

 }

 }

else{

// displaying the result

 printf("The password is safe.\n");

 }

 return 0;

 }