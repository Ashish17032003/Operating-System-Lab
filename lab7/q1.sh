#!/bin/bash

echo "Enter the 5-digit number: "
read n
sum=0
while [ $n -gt 0 -o $sum -gt 9 ]
do
	if [ $n -eq 0 ]
	then
		n=$sum
		sum=0
	fi

	sum=`expr $sum + $n % 10`
	n=`expr $n / 10`
done
echo "Sum: $sum"

