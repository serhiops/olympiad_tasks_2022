
def main() -> None:
    coins, shipboys, sailors, cannoneers, captains_assistants = map(int, input().split())
    total = shipboys + sailors*2 + cannoneers*4 + captains_assistants*8 + 24
    print(
        coins//total,
        coins//total * 2,
        coins//total * 4,
        coins//total * 8,
        coins//total * 8 + coins - coins//total * total,
        coins//total * 16,
    )
if __name__ == "__main__":
    main()