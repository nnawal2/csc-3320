#!/bin/bash

# Question number 4 midterm 1 
# Name of the program: Delete
# Name of programmer: Nafisa Nawal
# Email Address of Programmer: nnawal2@student.gsu.edu

echo -n "Enter the name of the person you wish to delete: "
read name

#delete contact from phonebook
sed -i '/$name/d' phonebook.txt