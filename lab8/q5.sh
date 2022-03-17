
echo "Enter the array size: "
read n
echo "Enter array elements: "
for((i=0;i<n;i++))
do
	read arr[$i]
done

for((i=0;i<n-1;i+=2))
do
	j=i+1
	temp=${arr[$j]}
	arr[$j]=${arr[$i]}
	arr[$i]=$temp
done

echo ${arr[*]}

