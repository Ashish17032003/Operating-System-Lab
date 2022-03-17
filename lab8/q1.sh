
echo "Enter the size of the array: "
read n
echo "Enter array elements: "

for((i=0;i<n;i++))
do
	read arr[$i]
done

echo "Array elements are: "
for((i=$(($n-1));i>=0;i--))
do
	echo ${arr[$i]}
done


