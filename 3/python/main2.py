ASCII_MINUS = 96

arr = [
    [3,5,5,5,5,5,5,3],
    [5,8,8,8,8,8,8,5],
    [5,8,8,8,8,8,8,5],
    [5,8,8,8,8,8,8,5],
    [5,8,8,8,8,8,8,5],
    [5,8,8,8,8,8,8,5],
    [5,8,8,8,8,8,8,5],
    [3,5,5,5,5,5,5,3],
]

def main() -> None:
    data = input().split()
    x = data[0]
    y = int(data[1])
    x = ord(x) - ASCII_MINUS 
    print(arr[y - 1][x - 1])
   

if __name__ == "__main__":
    main()