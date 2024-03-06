<?php
function bubbleSort($array)
{
    $ordenado = false;
    $length = count($array);
    while (! $ordenado) {
        $ordenado = true;
        $length -= 1;
        $j = 0;
        while ($j < $length) {
            if ($array[$j] > $array[$j + 1]) {
                $temp = $array[$j];
                $array[$j] = $array[$j + 1];
                $array[$j + 1] = $temp;
                $ordenado = false;
            }
            $j+=1;
        }
    }
    return $array;
}

$array = [13,234,2355,23,22,323];

print_r($array);
$array = bubbleSort($array);
print_r($array);
print_r("fin");
