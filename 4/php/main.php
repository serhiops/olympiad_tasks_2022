<?php
    function main(){
        [$coins, $shipboys, $sailors, $cannoneers, $captains_assistants] = explode(' ',readline());

        $total = $shipboys + $sailors*2 + $cannoneers*4 + $captains_assistants*8 + 24;
    
        $shipboys_coins = intdiv($coins, $total);
    
        echo $shipboys_coins,    ' ',  
            $shipboys_coins * 2, ' ',
            $shipboys_coins * 4, ' ',
            $shipboys_coins * 8, ' ',
            $shipboys_coins * 8 + $coins - $shipboys_coins*$total, ' ',
            $shipboys_coins * 16, ' ',
            PHP_EOL;
    }

    main();
