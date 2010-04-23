<html>
<head></head>
<body>
<?php
// Mi primer arreglo

$mi_array = array("Mexico", "Beto",  4, 9.25);

?>

Bienvenidos a Zapata's bar!!

<?php 
echo "Saludos " .  $mi_array[1] . " eres de " . $mi_array[0] . " llevas " . $mi_array[2] . " cervezas, cada una cuesta \$".  $mi_array[3] . "\n";

echo "El array tiene " . count($mi_array) . " elementos \n";

?> 
</body>
</html>
