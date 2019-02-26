# Name: Sam Foucart
# Assignment: CS3560 HW4
# Date: 2/13/19

total = 0
for i in range(1000):
    if i%3 == 0 or i%5 == 0:
        total += i

print(total)
