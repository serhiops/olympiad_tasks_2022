const main = () =>{
    let boxes = 5, cases = 20, cartridges_in_cases = 50, guns = 10, cartridges_in_store = 32;

    let total_cartridges = boxes * cases * cartridges_in_cases;

    let full_stores = total_cartridges / (guns * cartridges_in_store);
    full_stores |= 0;  //remove the fractional part

    let remainder_stores = (total_cartridges - full_stores * guns * cartridges_in_store) / cartridges_in_store;
    remainder_stores |= 0;

    let remainder_cartridges = total_cartridges - full_stores * guns * cartridges_in_store - remainder_stores * cartridges_in_store;

    console.log(full_stores, remainder_stores, remainder_cartridges);
};
main();