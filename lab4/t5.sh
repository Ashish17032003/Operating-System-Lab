#!/bin/bash

echo "Enter the number: "
read n
if [ `expr $n / 10` -eq 0 ]
then
	echo "1 digit Number"
elif [ `expr $n / 100` -eq 0 ]
then
	echo "2 digit Number"
elif [ `expr $n / 1000` -eq 0 ]
then
	echo "3 digit Number"
elif [ `expr $n / 10000` -eq 0 ]
then
	echo "4 digit Number"
else
	echo "The number is greater than 4 digit"
fi

# ca also do like greater than this or less than that logic
