#!/bin/bash

# WASS to print all the natural numbers between 1 to 100 in different line, the user enter how many elements want to print in a line.

echo "Enter number of lines to print in a single line"
read limit
j=1
while [ $j -le 100 ]
do
	echo -n "$j "
	
	if [ `expr $j % $limit` -eq 0 ]
	then 
		echo " "
	fi
	j=`expr $j + 1`
done
