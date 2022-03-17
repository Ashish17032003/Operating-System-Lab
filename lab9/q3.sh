
v=5
for ((i=1;i<4;i++))
do

	for((j=1;j<=$v;j++))
	do
		echo -n $j
	done

	v=`expr $v - 2`

	echo " "
done

