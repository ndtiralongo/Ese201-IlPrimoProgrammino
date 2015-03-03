#!/bin/bash
#Programma che visualizza se la temperatura di una cisterna puo' causare pericolo oppure no

echo -n " inserire temperatura cisterna "
read t
t1=18
t2=5

if($t -gt $t1)

echo -n " situazione normale "

else

if ($t -le $t2)
echo -n " danni "

else
echo -n " pericolo"
fi


done	




exit 0	


