#include <stdio.h>
#include <stdlib.h>

//Main program starting
int main()
{
FILE * file;
//char path[100];

//variable declare
char ch;
int characters, words, lines;

//file path and file
file = fopen("/home/nnawal2/midTerm2.txt", "r");

if (file == NULL)
{
printf("\nUnable to open file.\n");
printf("Check to see if file exists or not..\n");

exit(EXIT_FAILURE);
}


characters = words = lines = 0;
while ((ch = fgetc(file)) != EOF)
{
characters++;

/* Check new line */
if (ch == '\n' || ch == '\0')
lines++;

if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
words++;
}

if (characters > 0)
{
words++;
lines++;
}

//count words, lines, characters and adding header
printf("%d,", characters);
printf("%d,", words);
printf("%d\n", lines);

fclose(file);

return 0;
}