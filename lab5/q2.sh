#!/bin/bash

echo "Enter marks for first subject"
read one
echo "Enter marks for second subject"
read two
echo "Enter marks for third subject"
read three
total=`expr $one + $two + $three`
average=`expr $total / 3`
grade=`expr $average / 10`

case $grade in
	9) echo "O Grade";;
	8) echo "E Grade";;
	7) echo "A Grade";;
	6) echo "B Grade";;
	5) echo "C Grade";;
	4) echo "D Grade";;
	3) echo "E Grade";;
	2) echo "F Grade";;
	*)echo "Consult your teacher ";;

esac
