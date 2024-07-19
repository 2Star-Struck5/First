def is_prime(number):
    # Check if the number is less than 2 (not a prime number)
    if number < 2:
        return False
    # Check for factors from 2 to the square root of the number
    for i in range(2, number):
        # If the number is divisible by any other number, it's not prime
        if number % i == 0:
            return False
    # If no factors are found, the number is prime
    return True

# Example usage
num = int(input())  # Change this to the number you want to check
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")