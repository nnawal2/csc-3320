#include<stdio.h>
#include <string.h>

//function to sort array
void sort_alphabetic(char *arr[], char input);

//main function
int main(){
        
        //array of inputs
        char *arr[8] = {"Systems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};
        
        //variable declaration
        int i;
        char input;
        
        //print the array
        printf("Array is : \n");
        for(i=0;i<8;i++){
                printf("%s    ", arr[i]);
        }
        
        //get a input for sorting order from user
        printf("\n\nEnter A/a for ascending order, D/d for descending order: ");
        scanf("%c", &input);
        
        //sort array
        sort_alphabetic(arr, input);
        
        //print array after sort done
        printf("\nArray after sort : \n");
        for(i=0;i<8;i++){
                printf("%s    ", arr[i]);
        }
        
        
        
        return 0;
        
}




//function to sort array
void sort_alphabetic(char *arr[], char input){
        
        //variable for loop control..
        int i,j;
        
        //if character is A/a sort ascending
        if(input == 'A' || input == 'a'){
                for (i = 0; i < 7 ; i++){

                for (j = i + 1; j < 8; j++){
                                
                                //compares each String with  another String
                                //if first string is greater, swap them
                    if (strcasecmp(arr[i], arr[j]) > 0) {
                        
                        char *temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    
                                }
                }
            }
        }
        
        //if character is D/d sort descending
        else if(input == 'D' || input == 'd'){
                for (i = 0; i < 7 ; i++){

                for (j = i + 1; j < 8; j++){
        
                                //compares each String with  another String
                                //if first string is lesser, swap them
                    if (strcasecmp(arr[i], arr[j]) < 0) {
                        
                        char *temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    
                                }
                }
            }
        }
        
        //wrong input
        else{
                printf("\nWrong Input!");
        }
        
}
