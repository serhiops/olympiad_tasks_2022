
def main() -> None:
    boxes, cases, cartridges_in_cases, guns, cartridges_in_store = map(int, input().split())

    total_cartridges = boxes * cases * cartridges_in_cases
    
    full_stores = total_cartridges // (guns * cartridges_in_store)
    
    remainder_stores = (total_cartridges - full_stores * guns * cartridges_in_store) // cartridges_in_store

    remainder_cartridges = total_cartridges - full_stores * guns * cartridges_in_store - remainder_stores * cartridges_in_store
    
    print(full_stores, remainder_stores, remainder_cartridges)

if __name__ == "__main__":
    main()