#!/bin/bash

echo "Enter the binary number: "
read n
val=0
power=1
while [ $n  -ne 0 ]
do
	r=`expr $n % 10`
        n=`expr $n / 10`
        val=`expr $r \* $power + $val`
        power=`expr $power \* 2`
done

echo "Decimal  equivalent: $val"
