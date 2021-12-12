#include<stdio.h>
void sort_numeric(int n, double* arr, char choice)
{
int i, j;
   double t; // temporary variable used for swapping
  
if(choice == 'a' || choice == 'A'){ //ascending order
for (i = 0; i < n; i++) {
  
for (j = i + 1; j < n; j++) {
  
if (*(arr + j) < *(arr + i)) { // if this logic is true then swap
  
t = (double)*(arr + i);
*(arr + i) = *(arr + j);
*(arr + j) = t;
}
}
}
printf("Displaying array:\n");
   for ( i = 0; i < n; i++){
   printf("%f\n ", *(arr + i));
   }
   }
   else if(choice == 'd' || choice == 'D'){ //descending order
       for (i = 0; i < n; i++) {
  
for (j = i + 1; j < n; j++) {
  
if (*(arr + j) > *(arr + i)) { // if this logic is true then swap
  
t = (double)*(arr + i);
*(arr + i) = *(arr + j);
*(arr + j) = t;
}
}
}
printf("Displaying array:\n");
   for ( i = 0; i < n; i++){
   printf("%f\n ", *(arr + i));
   }
   }
   else{
       printf("Invalid Try Again!\n");
   }
}
int main(){

int n = 11; // array size
int i;
char choice; // user choice to sort in asceding or in descending order
double arr[] = { 10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56 };
printf("Sorting\n");
printf("Press a or A for Ascending order\nPress d or D for Descending order\nEnter choice: ");
scanf("%c",&choice);
sort_numeric(n,arr,choice); // call the sorting function

return 0;
}