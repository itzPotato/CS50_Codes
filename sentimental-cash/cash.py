from cs50 import get_float
from math import floor

while True:
    c = get_float("Change Owed: ")  # Use `get_float` for decimal input
    if c > 0:  # Adjusted condition to check for positive values
        break

# Convert dollars to cents to work with integers
c = round(c * 100)

# Initialize variables for coins
quarters = 0
dimes = 0
nickels = 0

if c / 25 >= 1:
    quarters = c // 25

remaining_cents = c % 25

if remaining_cents >= 10:
    dimes = remaining_cents // 10

remaining_cents %= 10

if remaining_cents >= 5:
    nickels = remaining_cents // 5

remaining_cents %= 5

tot_coins = quarters + dimes + nickels + remaining_cents
print(f"{tot_coins}")
