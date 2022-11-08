
const main = ()=>{
    let coins = 2160, shipboys = 1, sailors = 2, cannoneers = 1, captains_assistants = 1;
    let total = shipboys + sailors*2 + cannoneers*4 + captains_assistants*8 + 24;
    
    let shipboys_coins = (coins / total) | 0;  //remove the fractional part
    console.log(
        shipboys_coins,
        shipboys_coins*2,
        shipboys_coins*4,
        shipboys_coins*8,
        shipboys_coins*8 + coins - total * shipboys_coins,
        shipboys_coins*16,
    );
};

main();