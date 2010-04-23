html>
<head><title>My PHP script on the Web!!!</title><head>
<body>

<?php

// variables

define('BORRACHO', 'Cualquiera en este Salón');

$pais      =  "Mexico";

if ( isset($_GET['nombre']) )
{
   $nombre    = $_GET['nombre'];
}else{
   $nombre    =  "Beto";
}


if (isset($_GET['chelas']) && is_numeric($_GET['chelas']) )
{
   $chelas = $_GET['chelas'];
} else {
   $chelas = 4;
}


$precio    = 9.25;

$total = ($precio * $chelas);

$iva   = ($total * 0.15);

// echo "IVA ". $iva . "\n";

$gran_total = $total + $iva;

$gran_total_formateado = number_format($gran_total, 2, '.', '');  // http://www.php.net/manual/en/function.number-format.php

?>

<h1 style="color:orange">Bienvenidos a Zapata's bar!!</h1>

<?php 
echo "Saludos " .  $nombre . " eres de " . $pais . " llevas " . $chelas . " cervezas, cada una cuesta \$".  $precio . ", total \$".$gran_total_formateado."<br />";

echo "quien es Borracho? " . BORRACHO . "<br />";

?> 
</body>
