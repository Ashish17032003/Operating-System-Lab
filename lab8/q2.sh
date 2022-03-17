
echo "Enter the size of the array: "
read n

echo "Enter array elements: "
for((i=0;i<n;i++))
do
	read arr[$i]
done

j=`expr $n - 1`

for((i=0;i<j;i++))
do
	temp=${arr[$i]}
	arr[$i]=${arr[$j]}
	arr[$j]=$temp              # swapping the elements from first to last position
       	
	j=`expr $j - 1`
done

echo "Array in reverse order is: "
echo ${arr[*]}


