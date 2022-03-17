#!/bin/bash

i=5
while [ $i -ge 1 ]
do
	 k=1
	 while [ $k -le `expr 5 - $i` ]
	 do
		 echo -n " "
		 k=`expr $k + 1`
	 done

	 j=1

	 while [ $j -le $i ]
	 do
		 echo -n $j
		 j=`expr $j + 1`
	 done

	 j=`expr $j - 2`

	 while [ $j -ge 1 ]
	 do
		 echo -n $j
		 j=`expr $j - 1`
	 done

	 echo " "
	 i=`expr $i - 1`

done
