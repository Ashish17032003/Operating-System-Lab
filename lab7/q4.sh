i=1
while [ $i -le 5 ]
do
 j=5
 while [ $j -gt $i ]
 do
 echo -n " "
 j=`expr $j - 1`
 done
 j=1
 while [ $j -le $i ]
 do
 echo -n "$j"
 j=`expr $j + 1`
 done
 j=`expr $j - 2`
 while [ $j -ge 1 ]
 do
 echo -n "$j"
 j=`expr $j - 1`
 done
 echo ""
 i=`expr $i + 1`
done
