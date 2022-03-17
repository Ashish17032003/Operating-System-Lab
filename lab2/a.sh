echo "Enter 1st No.: "
read a
echo "Enter 2nd No.: "
read b
res=`expr $a+$b`=$(($a+$b))
echo sum = $res


# The expr command in Unix evaluates a given expression and displays its corresponding output
# It is used like $expr 12 + 8 for basic arithmetic operations
# echo "Enter two numbers"
# read x 
# read y
# sum=`expr $x + $y`
# echo "Sum = $sum"

# --->Shit Scientific Definition ------>  expr is an external program used by Bourne shell. It uses expr external program with the help of backtick. 
#                                                                                           The backtick(`) is actually called command substitution.


# `expr` and $(expr) are the same commands The second form, using dollar sign and parentheses, is a newer POSIX form. 

# Everything you type between backticks is evaluated (executed) by the shell before the main command and the output of that execution is used by that command, 
# just as if you'd type that output at that place in the command line.

#  res=`expr $a+$b` is like res=`expr $a + $b` ( ligh bulb moment). 

