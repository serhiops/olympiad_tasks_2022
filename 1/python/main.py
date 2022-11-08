from itertools import permutations

def main() -> None:
    data = input().lower().split()
    string = data[0]
    n = int(data[1])

    vowels = 'aeiouy'
    consonants = 'bcdfghjklmnpqrstvwxz'

    for value in set(permutations(string, n)):
        isGood = True
        for i in range(n - 1):
            if ((value[i] in vowels and value[i+1] in vowels) or 
            (value[i] in consonants and value[i+1] in consonants)):
                isGood = False
                break
        if isGood:
            print(''.join(value), end=' ')
    print() #new line

if __name__ == '__main__':
    main()