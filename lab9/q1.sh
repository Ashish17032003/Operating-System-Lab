echo "Enter your choice: "
echo "1. Volume of Cylinder"
echo "2. Volume of Cone"
echo "3. Volume of sphere"

read choice

case $choice in
	1)
		echo "Enter radius: "
		read radius
		echo "Enter height: "
		read height
		res=`expr 3.14\*$(($radius*$radius))\*$height`
		echo "Vol : $res"
		;;

	2)
		echo "Enter radius: "
                read radius
                echo "Enter height: "
                read height
		res=`expr 3.14\*$(($radius*$radius))\*$(($height/3))`
                echo "Vol : $res"
                ;;

	3)
		echo "Enter radius: "
		read radius
		res=`expr 3.14\*3.14\*$(($radius*$radius*$radius))`
		echo "Vol: $res"
		;;
esac


