#!/bin/bash

# Question number 3 midterm 1 
# Name of the program: Simple Calculator
# Name of programmer: Nafisa Nawal
# Email Address of Programmer: nnawal2@student.gsu.edu

echo "Welcome to simple calculator"

while [[ "$REPLY" != "no" ]]
do
        echo "Please enter two numbers each followed by a space: "
read num1 num2
echo "Please enter the operation: "
read op
case $op in
addition)
c=$((num1+num2))
;;
subtraction)
c=$((num1-num2))
;;
multiplication)
c=$((num1*num2))
;;
division)
#c=$((num1/num2))
echo "scale=1; $num1 / $num2" | bc
;;
modulo)
c=$((num1%num2))
;;
esac
echo "$c"


        read -p "Would you like to continue (yes/no)?"
done