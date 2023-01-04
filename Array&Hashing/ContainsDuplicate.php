<?php

function constantDuplicate($arry){
    $n = count($arry);
    $s = [];
   for ($i=0; $i < $n ; $i++) { 
        if (array_key_exists($arry[$i],$s)){
            echo "true" . "\n";
        }else{
            
        }
        array_push($s,$arry[$i]);
   }
   echo "false" . "\n";
}

$arry = [1,2,3,4];
constantDuplicate($arry);