
echo "Enter the size of array: "
read n1

echo "Enter array elements: "
for((i=0;i<n1;i++))
do
	read arr1[$i]
done

echo "Enter the size of array: "
read n2

echo "Enter array elements: "
for((i=0;i<n2;i++))
do
	read arr2[$i]
done

for((i=0;i<n2;i++))
do
	arr1[n1+$i]=${arr2[$i]}
done

echo "Concatenated array elements are"
echo ${arr1[*]}
