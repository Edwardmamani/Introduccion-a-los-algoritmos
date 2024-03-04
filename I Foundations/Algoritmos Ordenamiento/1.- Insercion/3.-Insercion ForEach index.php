<?php
$array = [23, 234, 52, 12, 52, 2, 4];
print_r($array);

foreach ($array as $index => $elemento) {
    $j = $index - 1;
    while ($j >= 0 && $elemento <= $array[$j]) {
        $array[$j + 1] = $array[$j];
        $j -= 1;
    }
    $array[$j + 1] = $elemento;
}

print_r($array);
