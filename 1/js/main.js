const vowels = 'aeiouy';
const consonants = 'bcdfghjklmnpqrstvwxz';

const count = (str, object) =>{
    return [... str].reduce((total,x) => total+(x==object), 0);
}

const combinations = (k, word, result, s='') =>{
    if(k == 0){
        let isGood = true;
        for(i = 0; i < s.length - 1; ++i)
        {
            if( (vowels.indexOf(s[i]) != -1 && vowels.indexOf(s[i + 1]) != -1) ||
                (consonants.indexOf(s[i]) != -1 && consonants.indexOf(s[i + 1]) != -1) ||
                count(s, s[i]) > count(word, s[i]))
            {
                isGood = false;
                break;
            }
        }
        if(isGood)
            result.add(s);
        return;
    }
    for(c of word)
        combinations(k - 1, word, result, s + c);
}

const main = () =>{
    let str = "product", number = 3;
    let result = new Set();
    combinations(number, str, result);
    console.log([... result].join(' '));
};

main();