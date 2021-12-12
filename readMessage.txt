#include<stdio.h>

#include<string.h>

#define MAX_LENGTH 100 //Setting a maximum length 


//initializing int and char variables
int is_palindrome(char *sequence, int seq_length){

int ispalin=1;

char rev_sequence[MAX_LENGTH];

int k=0;

for (int i = seq_length-1; i >= 0; i--)

{

rev_sequence[k]=sequence[i];

k++;

}

rev_sequence[k]='\0';

for (int i = 0; i < seq_length; i++)

{

if (sequence[i]!=rev_sequence[i])

{

ispalin=0;

break;

}

}




return ispalin;

}

int main()

{
//initializing char variable
char sequence[MAX_LENGTH];

//check and then print if conditions are met
printf("Enter the sequence: ");

scanf("%s",sequence);

if (is_palindrome(sequence,strlen(sequence)))

{

printf("%s is a palindrome\n",sequence);

}

else

{

printf("%s is not palindrome\n",sequence);

}

return 0;

}
                