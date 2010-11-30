#!/bin/env python

import MySQLdb

def ejecutar(sql):
	cursor.execute(sql)
	res=cursor.fetchall()
	print "Nombre Carrera"
	for ite in res:
		print ite[1], ' ', ite[2]


condicion=False

dataSource=MySQLdb.connect(host='localhost', user='bt0', passwd='bt0', db='prueba')
cursor=dataSource.cursor()
query='Select *  from Alumnos'
ejecutar(query)
while not condicion:
	sql=raw_input('Inserte una consulta ')
	ejecutar(sql)
	p=raw_input('Otra consulta: ')
	if p == 'no':
		condicion= not condicion
print 'bye'
