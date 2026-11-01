# Write a number guessing game using a while loop and the random module.
import random

secret = random.randint(1, 100)
tries = 0
guess = 0

print("Guess the number between 1 and 100")
while guess != secret:
    guess = int(input("Enter your guess: "))
    tries += 1
    if guess < secret:
        print("Too low!")
    elif guess > secret:
        print("Too high!")
    else:
        print("Correct! You guessed it in", tries, "tries.")
