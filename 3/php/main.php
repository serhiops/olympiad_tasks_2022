<?php
    // start code with comand 'php main.php'
    define("ASCII_MINUS", 96);

    function main(){
        [$x , $y] = explode(' ',readline());
        $x = ord($x) - ASCII_MINUS;

        if (!in_array(1, [$x, $y]) && !in_array(8, [$x, $y]))
            echo 8, PHP_EOL;
        else if(in_array($x, [1,8]) && in_array($y, [1,8]))
            echo 3, PHP_EOL;
        else
            echo 5, PHP_EOL;
    }
    main();

