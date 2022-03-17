#!/bin/bash
echo "Enter the real part of first number : "
read r1
echo "Enter the complex part of first number : "
read c1
echo "Enter the real part of second number : "
read r2
echo "Enter the complex part of second number :"
read c2
rsum=`expr $r1 + $r2`
csum=`expr $c1 + $c2`
echo "Sum of the complex number : $rsum + $csum i"
