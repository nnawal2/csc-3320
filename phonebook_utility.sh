#!/bin/bash

# Question number 4 midterm 1 
# Name of the program: Phonebook Utility
# Name of programmer: Nafisa Nawal
# Email Address of Programmer: nnawal2@student.gsu.edu

    exit=0
        while [ $exit -ne 1 ]
        do
          echo -e "add, find, delete, exit: "
            read input

            if [ "$input" = "add" ]
            then
                ./add.sh

            elif [ "$input" = "find" ]
            then
                ./lookup.sh
            elif [ "$input" = "del" ]
            then
                ./delete.sh

            elif [ "$input" = "alphabetical" ]
            then
                ./alphabetical.sh

            elif [ "$input" = "exit" ]
            then

                exit=1
            fi
        done
                exit 0