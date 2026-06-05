#!/bin/bash

read a b

if [[ ! -n $b ]]
then
echo "You should enter two numbers!"
exit 1
fi

if [[ $a -eq $b ]]; then
echo "These two numbers are equal!"
elif [[ $a -gt $b ]]; then
big_num=$a
small_num=$b
else
small_num=$a
big_num=$b

fi


result=$(echo $big_num % $small_num | bc)
	if [[ $result -eq 0 ]]; then
		n=$(echo "$big_num / $small_num" | bc)
		echo "$big_num is $n times  $small_num"
	else
		echo "no relation"
	fi

