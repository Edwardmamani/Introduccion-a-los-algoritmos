<?php
$array = [23, 234, 52, 12, 52, 2, 4];
print_r($array);

for ($i = 0; $i < count($array); $i++) {
    $j = $i - 1;
    $elemento = $array[$i];
    while ($j >= 0 && $elemento <= $array[$j]) {
        $array[$j + 1] = $array[$j];
        $j -= 1;
    }
    $array[$j + 1] = $elemento;
}

print_r($array);
