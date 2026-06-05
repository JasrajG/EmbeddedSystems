#!/bin/bash


declare -A arr
echo -n "Enter a list of words separated by spaces: "
read -r words
max_val=0
word1=""
for word in $words; do

((arr[$word]++))
if [[ arr[$word] -gt max_val ]]; then
max_val=${arr[$word]}
word1=$(echo $word)
fi


done
echo "Most frequent word: $word1"
echo "Occurrences: $max_val"




