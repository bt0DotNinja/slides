<html>
<head></head>
<body>
<?php

$Meses = array('Enero', 'Febrero','Marzo','Abril','Mayo','Junio','Julio','Agosto','Septiembre','Octubre','Noviembre','Diciembre');

?>

Los Meses:

<?php 

 for ($i=0; $i < count($Meses);$i++) 
 { 
    echo "El valor del elemento " . $i . " del array \$Meses es " . $Meses[$i] ."\n"; 
 }
   
 $food array(
             'Frutas'   => array('Pera', 'Mango', 'Mandarina', 'Guayaba'),
	     'Verduras' => array('Zanahoria', 'Papa', 'Espinaca', 'Apio', 'Brocoli')
 );
 
 var_dump($food);
?> 
</body></html>
