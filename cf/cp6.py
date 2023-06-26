# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Read the values of n and k
    n, k = map(int, input().split())

    # Initialize variable
    count = 0

    # Iterate over the bits of n
    for i in range(32):  # Assuming 32-bit integers
        # Check if the ith bit is set
        if n & (1 << i) != 0:
            count += 1

    # Print the number of ways to buy desserts
    print(count)
