<?php

$a = 1;
$b = 1;

$result = 0;
while($a <= $b){
    $a *= 3;
    $b *= 2;
    $result++;
}

echo $result . "\n";