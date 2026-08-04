#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'bonAppetit' function below.
#
# The function accepts following parameters:
#  1. INTEGER_ARRAY bill
#  2. INTEGER k
#  3. INTEGER b
#

def bonAppetit(bill, k, b):
    # Calculate the total cost of items Anna actually ate
    # Sum all items except the one at index k
    anna_total = sum(bill) - bill[k]
    
    # Anna's actual fair share (split by 2)
    anna_share = anna_total // 2
    
    # Check if Brian charged her correctly
    if b == anna_share:
        print("Bon Appetit")
    else:
        # Print the overcharged amount
        print(b - anna_share)

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])
    k = int(first_multiple_input[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna