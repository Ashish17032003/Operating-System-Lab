echo "Enter Year : "
read year
n=5
c=0
while [ $c -ne $n ]
do
	year=`expr $year + 1`
	if [ `expr $year % 400` -eq 0 -o `expr $year % 4` -eq 0 -a `expr $year % 100` -ne 0 ]
        then
	        c=`expr $c + 1`
	        echo " $year "
        fi
done
