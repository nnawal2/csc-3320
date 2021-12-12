#!/bin/bash
#following code will ask the user to type in a command and then print the manual’s text associated with that corresponding command
# Question number 2 midterm 1 
# Name of the program: Help me
# Name of programmer: Nafisa Nawal
# Email Address of Programmer: nnawal2@student.gsu.edu
echo "Write a command please: "
read cmd_in
if grep -q $cmd_in mandatabase.txt; then
        grep $cmd_in mandatabase.txt;

else

echo "Sorry, I cannot help you"

fi
~                                                                               
~