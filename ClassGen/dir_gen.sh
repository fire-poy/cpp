#!/bin/bash
echo "Dir generator for C++ piscine"
read -p 'Enter name of folders : ' NAME
read -p 'Enter number of folders : ' N
while [ "$((N--))" -ne 0 ]
do
    DIR=$NAME
    DIR+=0 
    DIR+=$N 
	if [ -e "$DIR" ] 
		then
			echo "Impossible: dir $DIR already exist"
		else
    		mkdir $DIR
	fi
	N=$((N--))
done
# while [ "$N" -ne 0 ]
# $((N--)) command not found error