# Gavin Taylor

import random

char = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
        'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '!', '@', '#',
        '$', '%', '&']

let = input("How many letters do you want in your password? \n")
num = input("How many numbers do you want in your password? \n")
sym = input("How many symbols od you want in your password? \n")

password = ""
for num in range(1, int(let) +1):
    password = password + random.choice(char)
for num in range(1, int(num) +1):
    password = password + random.choice(char)
for num in range(1, int(sym) +1):
    password = password + random.choice(char)

print(f"Your new password is {password}")

