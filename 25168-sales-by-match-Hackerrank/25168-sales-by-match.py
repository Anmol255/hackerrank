#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#

def sockMerchant(n, ar):
    # Use a set to keep track of socks looking for a match
    unmatched_socks = set()
    pairs = 0
    
    for sock in ar:
        # If we already have one matching sock in the set, we found a pair!
        if sock in unmatched_socks:
            pairs += 1
            unmatched_socks.remove(sock) # Remove it since the pair is complete
        else:
            # Otherwise, add this sock to wait for its match
            unmatched_socks.add(sock)
            
    return pairs

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna