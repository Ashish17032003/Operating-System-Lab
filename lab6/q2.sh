
#!/bin/bash

echo "Enter a number: "
read n
j=$n
num=0
until [ $j -le 0 ]
do
	re=`expr $j % 10`
	j=`expr $j / 10`
	re=`expr $re*$re*$re| bc`
	num=`expr $num + $re`
done

if [ $num -eq $n ]
then
	echo "$n is an Armstrong number"

else
	echo "$n is not an Armstrong number"
fi
