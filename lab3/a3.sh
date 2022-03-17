#!/bin/bash

echo "Enter 3 sides:"
read a
read b
read c
a1=`expr $a + $b`
a2=`expr $b + $c`
a3=`expr $a + $c`
if [ $a1 -gt $c -a $a2 -gt $a -a $a3 -gt $b ]
then
	echo "Triangle Possible"
	s=`echo "scale=2; $(($a + $b + $c))/2" | bc`
        area=`echo "scale=2; sqrt($s*($s-$a)*($s-$b)*($s-$c))" | bc`
        echo "Area of Triangle: $area"
else
        echo "Invalid Triangle"
fi
