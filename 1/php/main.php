<?php
    $vowels = 'aeiouy';
    $consonants = 'bcdfghjklmnpqrstvwxz';

    function combinations(int $k, string $word, array &$result, string $s=''){
        global $vowels, $consonants;
        if($k == 0){
            $isGood = true;
            for ($i=0; $i < strlen($s) - 1; $i++) { 
                if( (!substr_count($vowels, $s[$i]) && !substr_count($vowels, $s[$i + 1])) ||
                    (!substr_count($consonants, $s[$i]) && !substr_count($consonants, $s[$i + 1])) ||
                    (substr_count($s, $s[$i]) > substr_count($word, $s[$i])))
                {
                    $isGood = false;
                    break;
                }
            }
            if($isGood)
                $result[] = $s;
            return;
        }
        for ($i=0; $i < strlen($word); ++$i) 
            combinations($k-1, $word, $result, $s.$word[$i]);
    }

    function main(){
        [$str, $number] = explode(' ',strtolower(readline()));
        $result = array();
        combinations($number,$str,$result);
        echo implode(' ',array_unique($result)), PHP_EOL;
    }

    main();