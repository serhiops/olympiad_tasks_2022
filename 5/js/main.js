
const main = () =>{
    let word = 'Слава Україні!'.toLowerCase();
    let numbers = '004014063076165102 022032003012005!';
    let alphabet ='абвгґдеєжзиіїйклмнопрстуфхцчшщьюя';

    let index = 1;
    for(symbol of word){
        if(symbol.charCodeAt(0) <= 47){
            index = 1;
            process.stdout.write(symbol);
        }
        else{
            process.stdout.write( ((alphabet.indexOf(symbol) + 1)*index).toString().padStart(3, '0') );
            ++index;
        };
    };

    console.log();
    
    index = 1;
    for(let i = 0; i < numbers.length; ){
        if(numbers[i].charCodeAt(0) <= 47){
            process.stdout.write(numbers[i]);
            index = 1;
            ++i;
        }
        else{
            process.stdout.write(alphabet[(Number(numbers.slice(i, i+3) - 1 ) / index|0)]);
            i+=3;
            ++index;
        };
    }
    console.log();
};

main();