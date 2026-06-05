#!/bin/bash


store_books(){

declare -a list
IFS=':'
while read -r p || [[ -n "$p" ]]; do
p="${p%$'\r'}"
read -r id title author number <<< "$p"
b=$(check_book $id)


if [[ b -gt number ]]; then
list+=("$title")
echo "in here"
fi


done < books.txt
sort_book $list
}



check_book(){

while read -r q || [[ -n "$q" ]]; do
q="${q%$'\r'}"
IFS=':'
read -r id number <<< "$q"
 if [[ $1 == $id ]]; then
echo $number
exit
fi

done < borrowed.txt
}


sort_book(){
for i in $1
do echo $i
done
}


store_books

