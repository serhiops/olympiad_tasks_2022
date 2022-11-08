<?php
    // start code with comand 'php main.php'
    function main(){
        [$boxes, $cases, $cartridges_in_cases, $guns, $cartridges_in_store] = explode(' ',readline());

        $total_cartridges = $boxes * $cases * $cartridges_in_cases;

        $full_stores = intdiv($total_cartridges, $guns * $cartridges_in_store);

        $remainder_stores = intdiv($total_cartridges -  $full_stores * $guns * $cartridges_in_store, $cartridges_in_store);

        $remainder_cartridges = $total_cartridges - $full_stores * $guns * $cartridges_in_store - $remainder_stores * $cartridges_in_store;

        echo $full_stores, ' ', $remainder_stores, ' ', $remainder_cartridges , PHP_EOL;
    }

    main();
   