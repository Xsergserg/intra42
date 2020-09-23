#!/bin/sh

 
cat /etc/passwd | grep -v "\#" | sed 's|:[[:print:]]*||' | awk 'NR % 2 == 0' | rev | sort -r | awk 'NR>=ENVIRON["FT_LINE1"] && NR<=ENVIRON["FT_LINE2"]' | sed -e 's|$|, |' | tr -d '\n' | rev |cut -c 3- | rev | tr '\n' '\.'

cat https://projects.intra.42.fr/uploads/document/document/827/contacts_hard.txt
grep -i -w 'nicolas'
grep -i -w 'bauer'

