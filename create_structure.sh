#!/bin/bash

for i in {1..30}
do
    if [ $i -lt 10 ]
    then
        mkdir DAY-0$i && touch DAY-0$i/.gitkeep
    else
        mkdir DAY-$i && touch DAY-$i/.gitkeep
    fi
done

# for i in {1..30}
# do 
#     if [ $i -lt 10 ]
#     then
#         echo "ok $i"
#     else
#         echo "not ok $i"
#     fi
# done