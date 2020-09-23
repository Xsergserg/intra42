#!/bin/sh
touch -r bomb.txt 1.txt
echo $[$(date 1.txt +%s)-1]

#echo $[$(date -atime bomb.txt +%s)-1]