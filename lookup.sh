#!/bin/bash

# Question number 4 midterm 1 
# Name of the program: Lookup
# Name of programmer: Nafisa Nawal
# Email Address of Programmer: nnawal2@student.gsu.edu

echo -n "Name of the person for information to be found: "
read query

#lookup for a phone number from phonebook.txt
echo "Name; Address; Phone number"
grep -i $query phonebook.txt