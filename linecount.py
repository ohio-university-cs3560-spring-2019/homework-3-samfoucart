####################################
#
# @file linecount.sh
# @name Sam Foucart
# @date 2/25/19
#
# CS 3560 Homework 5 Bash Script
#
####################################
import re

filename = "linecount.txt" # I open the file created by wc *
file = open(filename, "r")
fileString = [] # I initialize an array to hold each word of linecount
for line in file:
	fileString += line.split() # this splits every word of every line
							   # of linecount and appends it to fileString
lastIndex = len(fileString) - 1 # len means length or sizeOf
	

print("Total lines: ", fileString[lastIndex - 3])
print("Total words: ", fileString[lastIndex - 2])
print("Total characters: ", fileString[lastIndex - 1])

