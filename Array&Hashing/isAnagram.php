<?php

    function isAnagram($s, $t) {
        return count_chars($s, 1) === count_chars($t, 1);
    }


//    echo isAnagram('anagram','nagaram') . "\n";
    echo isAnagram('cat','catt') . "\n";
?>