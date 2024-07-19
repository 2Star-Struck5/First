def power(base, exponent):
    # Base case: when exponent is 0, any number to the power of 0 is 1
    if exponent == 0:
        return 1
    # Recursive case: multiply the base by the result of the function with a reduced exponent
    else:
        return base * power(base, exponent - 1)

# Example usage
base_number = 2
exponent_value = 3
result = power(base_number, exponent_value)