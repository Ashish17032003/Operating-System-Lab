#!/bin/bash

if [ $3 -eq 1 ]
then
	res=`expr $1 + $2`
        echo "Result= $res"
elif [ $3 -eq 2 ]
then
        res=`expr $1 - $2`
        echo "Result= $res"
elif [ $3 -eq 3 ]
then
        res=`expr $1 \* $2`
        echo "Result= $res"
elif [ $3 -eq 4 ]
then
        res=`expr $1 / $2`
        echo "Result= $res"
elif [ $3 -eq 5 ]
then
        res=`expr $1 % $2`
        echo "Result= $res"
else
        echo "Wrong input"
fi
