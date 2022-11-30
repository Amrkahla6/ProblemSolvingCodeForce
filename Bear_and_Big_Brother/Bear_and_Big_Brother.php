<?php

fscanf(STDIN, "%d %d ", $a,$b);
$result = 0;
while($a <= $b){
    $a *= 3;
    $b *= 2;
    $result++;
}

echo $result;