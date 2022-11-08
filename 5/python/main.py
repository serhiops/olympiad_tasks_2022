from string import punctuation

def main() -> None:
    word = 'Слава Україні!'.lower()
    numbers = '004014063076165102 022032003012005!'

    alphabet = 'абвгґдеєжзиіїйклмнопрстуфхцчшщьюя'

    index = 1
    for symbol in word:
        if symbol in punctuation or symbol.isspace():
            print(symbol, end='')
            index = 1
        else:
            print('{:03}'.format((alphabet.find(symbol) + 1)*index), end='')
            index+=1
    print()

    index = 0
    step = 1
    while(index < len(numbers)):
        if numbers[index] in punctuation or numbers[index].isspace():
            print(numbers[index], end = '')
            step = 1
            index += 1
        else:
            print(alphabet[(int(numbers[index: index + 3]) - 1) // step], end ='')
            step += 1
            index += 3
    print()

if __name__ == "__main__":
    main()
        



