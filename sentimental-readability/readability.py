from cs50 import get_string
import math

# Get input text
user_text = get_string("Text: ")

letters = 0
words = 1
sentences = 0

# Count letters, words, and sentences
for char in user_text:
    if char.isalpha():
        letters += 1
    elif char == ' ':
        words += 1
    elif char in ['.', '!', '?']:
        sentences += 1

# Calculate averages
L = letters / words * 100
S = sentences / words * 100

# Calculate readability index
index = round(0.0588 * L - 0.296 * S - 15.8)

# Print the grade level
if index < 1:
    print("Before Grade 1")
elif index > 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")
