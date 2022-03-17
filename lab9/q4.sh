echo "Enter the composite no.: "
read composite
n=5
l=0

composite=`expr $composite + 1`
while [ $l -ne $n ]
do
        count=0
        i=2
        until [ $i -ge $composite ]
        do
                if [ `expr $composite % $i` -eq 0 ]
                then
                        count=`expr $count + 1`
                fi

                i=`expr $i + 1`
        done

        if [ $count -eq 0 ]
        then
                echo "$composite "
                l=`expr $l + 1`
        fi

        composite=`expr $composite + 1`
done
