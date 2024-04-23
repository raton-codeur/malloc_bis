#!/usr/bin/zsh

for (( i = 0; i < 5000; i++ ))
do
	make N=$i
	./a.out
	echo "code de retour : $?"
done
