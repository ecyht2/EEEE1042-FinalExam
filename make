#!/usr/bin/env bash

vg="valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --track-origins=yes -s"
FILE="Tan_HongKai_EEEE1042Final4a"

gcc -o $FILE.out ${FILE}.c
$vg ./$FILE hi bye cyaasdf
