#!/bin/bash
####################################
#
# @file linecount.sh
# @name Sam Foucart
# @date 2/25/19
#
# CS 3560 Homework 5 Bash Script
#
####################################

wc * > linecount.txt # the > redirects the output of wc * to linecount.txt
python linecount.py
rm linecount.txt
