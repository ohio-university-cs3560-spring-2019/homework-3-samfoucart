=begin
	Name: Sam Foucart
	Date: 2/25/19
	Assignment: Homework 6
	Description: This is a project to test regular expressions
=end
	
print "Enter the string you want to modify: "
inputString = gets # gets is a method to get user input
outputString = inputString.gsub(/\bf/, "gh") # gsub is the method shown in class to do this
outputString = inputString.gsub(/\bF/, "GH")
ouputString = inputString.gsub(/sh\b/, "ti")
outputString = inputString.gsub(/SH\b/, "SH")
outputString = inputString.gsub(/\Bi\B/, "o")
outputString = inputString.gsub(/\BO\B/, "O")

puts outputString
