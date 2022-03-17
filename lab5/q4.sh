#!/bin/bash
#    WASS to print all the natural numbers between 1 to n in reverse order

echo "Enter the number (n) up to you want to print in reverse order : "
read n

while [ $n -ge 1 ]
do 
	echo -n " $n"
	n=`expr $n - 1`
done
