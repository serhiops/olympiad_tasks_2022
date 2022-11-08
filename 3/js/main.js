const ASCII_MINUS = 96;

const main = () =>{
    let x = 'h', y = 8;

    x = x.charCodeAt(0) - ASCII_MINUS;

    if(![x,y].includes(1) && ![x,y].includes(8))
        console.log(8);
    else if([8,1].includes(x) && [8,1].includes(y))
        console.log(3);
    else
        console.log(5);
};

main();