import sys

if __name__ == '__main__':
    # Starting number
    i = 0

    # Use optional command-line argument
    if len(sys.argv) == 2:
        try:
            i = int(sys.argv[1])
        except:
            pass

    # Print Enumerated Standard Output
    for line in sys.stdin:
        print(f'{str(i) + ":":<4} {line}', end='')
        i = i + 1
