#!/bin/bash

echo "Enter the number: "
read n
i=2
flag=0

until [ $i -eq $n ]
do

	if [ `expr $n % $i` -eq 0 ]
	then
		flag=1
	fi

	i=`expr $i + 1`

done

if [ $flag -eq 1 ]
then
	echo "Number is not prime"
else
	echo "Number is Prime"
fi
