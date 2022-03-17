#!/bin/bash

echo "Enter the no. of rows: "
read n
sp=`expr $n - 1`
st=1
i=1
while [ $i -le $n ]
do
	 j=1
	 while [ $j -le $sp ]
	 do
		 echo -n " "
		 j=`expr $j + 1`
	 done

	 k=1

	 while [ $k -le $st ]
	 do
		 echo -n "* " 
		 k=`expr $k + 1`
	 done

	 if [ $sp -gt $i ]
	 then
		 sp=`expr $sp - 1`
		 st=`expr $st + 1`
	 fi

	 if [ $sp -lt $i ]
	 then
		 sp=`expr $sp + 1`
		 st=`expr $st - 1`
	 fi

	 echo ""

	 i=`expr $i + 1`
done

