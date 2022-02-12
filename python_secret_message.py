import random

char = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
           'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
           'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
           '!', '@', '#', '$', '%', '&']

message = input("What is your secret message? \n")
message_list = list(message)

# length_message = len(message_list)

secret_message = ""
for character in range(1, len(message_list) + 1):
    random_char = random.choice(char)
    secret_message = secret_message + random_char

print(f"Your secret message is: {secret_message}")
