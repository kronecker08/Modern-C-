 #!/bin/bash
 #echo "Hello world"
 echo "The number of lines are"
 grep -c ^ data.dat
 echo "The number of lines with dolar or dolor are"
 grep -E 'dolor|dalor' data.dat | grep -c ^
 echo "The number of words are"
 wc -w data.dat
 echo "The number of those that start with mol are"
 grep -c mol data.dat
 echo "The number of files in test folder with .txt extension are"
 ls *.txt | grep -c ^