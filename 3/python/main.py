ASCII_MINUS = 96

def main() -> None:
    data = input().split()
    x = data[0]
    y = int(data[1])

    x = ord(x) - ASCII_MINUS
    if 1 not in (x, y) and 8 not in (x, y):
        print(8)

    elif x in (1,8) and y in(1,8):
        print(3)

    else: 
        print(5)

if __name__ == "__main__":
    main()