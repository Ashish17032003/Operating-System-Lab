#!/bin/bash

echo "Enter first Number"
read a
echo "Enter second Number"
read b

echo "Choose an option"
echo "1 for Sum"
echo "2 for multiplication"
echo "3 for subtraction"
echo "4 for division"

read choice
case $choice in
       	1)res=`expr $a + $b`;;
        2)res=`expr $a - $b`;;
        3)res=`expr $a * $b`;;
        4)res=`expr $a / $b`;;
	*)echo "Wrong input"
esac
echo "Result= $res"
