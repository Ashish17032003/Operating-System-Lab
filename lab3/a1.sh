#!/bin/bash

echo enter number 1: $1
echo enter number 2: $2
if [ $1 -gt $2 ]
then
	echo $1 is greater than $2
else
	echo $1 is smaller than $2
fi
