#include <stdio.h>
#include <string.h>

int main()
{
//initialising variables
char password[25];
int points = 100,len;
int lower_count = 0,upper_count=0,num_count=0,consecutive_count = 0;
printf("Please enter the password: ");
scanf("%s",password);

//checking the length of the password 
len = strlen(password);

//checking conditions for missing lower case
for(int i=0;i<len;i++)
{
if(password[i] >= 'a' && password[i] <= 'z')
{
lower_count += 1;
}
}

if(lower_count <= 0)
{
//subtract 20 points if missing lower case
points -= 20;
}

//checking conditions for missing upper case
for(int i = 0;i<len;i++)
{
if(password[i] >= 'A' && password[i] <= 'Z')
{
upper_count += 1;
}
}

if(upper_count < 2)
{
//subtract 20 points if missing upper case
points -= 20;
}

//checking conditions for missing numbers
for(int i = 0;i<len;i++)
{
if(password[i] >= '0' && password[i] <= '9')
{
num_count += 1;
}
}

if(num_count <= 0)
{
//subtract 20 points if missing numbers
points -= 20;
}

//checking conditions for consecutive characters
for(int i=0;i<len;i++)
{
for(int j = i+1;j<len;j++)
{

if(password[j] - password[i] == 1)
{
consecutive_count += 1;
}
}
}

if(consecutive_count >= 2)
{
//subtract 20 points if there are more than 2 consecutive characters
points -= 20;
}


if(points < 70)
{
printf("The points for your password out of 100 is: %d",points);
printf("\nUnSafe\n");
}
else
{
printf("The points for your password out of 100 is: %d",points);
printf("\nSafe\n");
}

return 0;
}