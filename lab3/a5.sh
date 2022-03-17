#!/bin/bash
echo Enter a three digit number
read num
temp=$num
rev=0
rem=`expr $num % 10`
rev=`expr $rev \* 10 + $rem`
num=`expr $num / 10`
rem=`expr $num % 10`
rev=`expr $rev \* 10 + $rem`
num=`expr $num / 10`
rem=`expr $num % 10`
rev=`expr $rev \* 10 + $rem`
num=`expr $num / 10`

if [ $temp -eq $rev ]
then
  	echo $temp is a Palindrome
else
    	echo $temp is not a Palindrome
fi


# Alternate Logic : Kids

