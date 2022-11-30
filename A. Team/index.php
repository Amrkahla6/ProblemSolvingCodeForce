<?php 

fscanf(STDIN, "%d", $n);
$result =0;

for($i=0; $i< $n; $i++){
    fscanf(STDIN, "%d %d %d", $number1,$number2,$number3);
    $result += ($number1 + $number2 + $number3 >= 2);
}

echo $result;