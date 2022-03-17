#!/bin/bash

i=5
while [ $i -ge 1 ]
do
	j=1
	while [ $j -lt $i ]
	do
		echo -n " "
		j=`expr $j + 1`
	done

	t=`expr 6 - $i`

	while [ $t -ge 1 ]
	do
		echo -n $t
		t=`expr $t - 1`
	done

	echo " "

	i=`expr $i - 1`
done
