<?php
if(!extension_loaded('mysql'))
        die("Error XD");
else{
     $conex=mysql_connect("host","Usuario","Password")
         or die("no se puede conectar");
     mysql_selectdb("Base de Datos")
         or die("XD");

//mysql_query();
//mysql_fetch_array();
//mysql_free_result();

mysql_close();
?>
