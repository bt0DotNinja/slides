<html>
<head><title></title><head>
<body>

<?php
// Array asociativo o hashtable

$Capitales['Morelos']    = 'Cuernavaca';
$Capitales['Yucatan']    = 'Merida';
$Capitales['Chiapas']    = 'Tuxtla Gutierrez';
$Capitales['Nuevo Leon'] = 'Monterrey';
$Capitales['Edomex']     = 'Toluca';

$Europa = array('Paris'=>'Francia', 'Praga'=>'Rep. Checa', 'Roma'=>'Italia', 'Bucarest'=>'Rumania', 'Dublin'=>'Irlanda');

?>

Los estados:

<?php 

foreach ($Capitales as $key => $capital) 
 {
    
    echo "La capital de " . $key . " es " . $capital ."\n"; 
 }

echo "El array tiene " . count($Capitales) . " elementos \n";

?> 
</body>
</html>
