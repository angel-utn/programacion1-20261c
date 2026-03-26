Algoritmo sin_titulo
	Escribir 'Ingres monto del producto: '
	Leer montoProducto
	Si montoProducto>10000 Entonces
		montoFinal = montoProducto*0.9
	SiNo
		montoFinal = montoProducto
	FinSi
	Escribir 'Monto Final: $',montoFinal
FinAlgoritmo
