<html>
<head></head>
<body>

<?php
// variables

define('BORRACHO', 'Cualquiera en este salón');

$pais      =  "México";
$nombre    =  "Beto";
$chelas    =  4;
$precio    = 9.25;
$total = ($precio * $chelas);
$iva   = ($total * 0.15);

// echo "IVA ". $iva . "\n";

$gran_total = $total + $iva;
$gran_total_formateado = number_format($gran_total, 2, '.', '');  // http://www.php.net/manual/en/function.number-format.php

?>

Bienvenidos a Zapata's bar!!
<?php 
echo "Saludos " .  $nombre . " eres de " . $pais . " llevas " . $chelas . " cervezas, cada una cuesta \$".  $precio . ", total \$".$gran_total_formateado."\n";

echo BORRACHO . "\n";

define('BORRACHO', 'otro valor para BORRACHO');
echo BORRACHO;
?> 

</body>
</html>
