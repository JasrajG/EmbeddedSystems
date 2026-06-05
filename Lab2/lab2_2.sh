#!/bin/bash


generate_random_number(){

echo $((RANDOM%100))

}

play_game(){

local x=$(($(generate_random_number)+1))
local y=""
local counter=1

echo -n "Welcome to the Number Guessing Game! I have selected a number between 1 and 100. Can you guess it?"
while(true); do
echo -n " Enter your guess (or type 'exit' to quit): "
read y
if [[ $y == "exit" ]]; then
echo "Thanks for playing the correct number was $y"
exit
elif [[ ! $y =~ ^[0-9]+$ ]]; then
echo "Please enter a valid number"
((counter --))
elif [[ y -lt x ]]; then
echo "Too low! Try again."

elif [[ y -gt x ]]; then
echo "Too high! Try again."

else
echo "Congratulations! You've guessed the right number $y in $counter attempts"
exit

fi
 
((counter++))
done
}

play_game
