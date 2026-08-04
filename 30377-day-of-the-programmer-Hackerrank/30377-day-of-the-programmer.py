#!/usr/bin/env python3
import os

def dayOfProgrammer(year):
    # 1. Transition Year (1918)
    if year == 1918:
        return "26.09.1918"
    
    # 2. Julian Calendar (1700 - 1917)
    elif year < 1918:
        if year % 4 == 0:
            return f"12.09.{year}"
        else:
            return f"13.09.{year}"
            
    # 3. Gregorian Calendar (1919 - 2700)
    else:
        if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
            return f"12.09.{year}"
        else:
            return f"13.09.{year}"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    year = int(input().strip())
    result = dayOfProgrammer(year)
    fptr.write(result + '\n')
    fptr.close()


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna