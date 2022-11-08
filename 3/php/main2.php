<?php
    define("ASCII_MINUS", 96);

    $arr = [
        [3,5,5,5,5,5,5,3],
        [5,8,8,8,8,8,8,5],
        [5,8,8,8,8,8,8,5],
        [5,8,8,8,8,8,8,5],
        [5,8,8,8,8,8,8,5],
        [5,8,8,8,8,8,8,5],
        [5,8,8,8,8,8,8,5],
        [3,5,5,5,5,5,5,3],
    ];

    function main($arr){
        [$x , $y] = explode(' ',readline());
        $x = ord($x) - ASCII_MINUS;
        echo $arr[$y - 1][$x - 1], PHP_EOL;
    }
    main($arr);