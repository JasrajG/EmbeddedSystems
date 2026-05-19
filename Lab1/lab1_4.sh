#!/bin/bash

if [[ $# -lt 1 ]]; then

echo "No arguments providfed."
exit 1

fi
echo $#
echo "Please enter an integer: "
read i

if [[ $i -gt $# ]]; then
echo "No Argument has been provided at position $i"

else
echo "The argument at position at $i is : ${!i}"
fi
