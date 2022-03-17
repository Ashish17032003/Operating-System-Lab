#!/bin/bash

i=1
while [ $i -le 50 ]  #while i is less than 50
do
	echo -n " $i"
	i=`expr $i + 1`
done
