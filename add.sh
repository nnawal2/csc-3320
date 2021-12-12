#!/bin/bash

# Question number 4 midterm 1 
# Name of the program: Add
# Name of programmer: Nafisa Nawal
# Email Address of Programmer: nnawal2@student.gsu.edu

echo "Please enter Name, Address,  & Phone Number to make an entry in the Phonebook"

echo -n "Please enter name  of the person to make an entry: "
read name

echo -n "Address: "
read address

echo -n "Phone Number: "
read PhoneNumber

echo "$name ; $address ; $PhoneNumber">>phonebook.txt