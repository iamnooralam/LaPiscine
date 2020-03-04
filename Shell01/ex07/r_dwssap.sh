#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed -n "p;n" | cut -d : -f 1 | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2'p' | tr "$\n" "," | sed "s/,/, /g" | sed 's/.\{2\}$/./' | tr -d "\n"
