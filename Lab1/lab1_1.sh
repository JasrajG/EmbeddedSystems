#!/bin/bash

h=$(date +%H)
str="Good "
if [[ 5 -le $h && $h -le 11 ]]; then
	str+="morning"

elif [[ 12 -le $h && $h -le 17 ]];then
	str+="afternoon"

elif [[ 18 -le $h && $h -le 21 ]];then
	str+="evening"

elif [[ 22 -le $h || $h -le 4 ]];then
	str+="night"
else
	echo "Error"
fi


str+=", $(whoami)! Today is $(date +%A), and the time is $(date +%H:%M)."
echo $str
echo "$(date +"%Y-%M-%d %H:%m:%S") - $str" >> .greeting_log


