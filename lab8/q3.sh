
echo "Enter the size of the array "
read n
echo "Enter the elements of the array "
for((i=0;i<n;i++))
do
	read arr[$i]
done
echo "Enter your choice : 1 for ascending and 2 for descending "
read ch
case $ch in 
	1)
		for((i=0;i<n;i++))
		do
			for((j=$i;j<n;j++))
			do
				if [ ${arr[$i]} -gt ${arr[$j]} ] 
				then
					t=${arr[$i]}
					arr[$i]=${arr[$j]}
					arr[$j]=$t
				fi
			done
		done
		echo "The sorted arrray is "
		for((i=0;i<n;i++))
		do
			echo ${arr[$i]}
		done
		;;
	2)
		for((i=0;i<n;i++))
		do
			for((j=$i;j<n;j++))
			do
				if [ ${arr[$i]} -lt ${arr[$j]} ]
				then
					t=${arr[$i]}
					arr[$i]=${arr[$j]}
					arr[$j]=$t
				fi
			done
		done
		echo "The final array is "
		for((i=0;i<n;i++))
		do
			echo ${arr[$i]}
		done
		;;
	*) 	
		echo "Invalid option"
		;;
esac
