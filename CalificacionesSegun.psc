Algoritmo sin_titulo
	Definir calif como entero
	Imprimir "Ingrese la calificación: "
	leer calif
	si calif = 100 Entonces
		Imprimir "Excelente"
	SiNo
		si calif >= 90 y calif <= 99 Entonces
			calif = 90
		sino
			si calif >= 80 y calif <= 89 Entonces
				calif = 80
			SiNo
				si calif >= 70 y calif <= 79 Entonces
					calif = 70
				FinSi
			FinSi
		FinSi
	FinSi
	si calif <= 69 Entonces
		Imprimir "No aprobado"
	FinSi
	segun calif hacer
		90:
			Imprimir "Muy bien"
		80: 
			Imprimir "Bien"
		70: 
			Imprimir "Regular"
		De Otro Modo:
			si calif < 0 Entonces
				Imprimir "Calficación inválida"
			FinSi
	FinSegun
FinAlgoritmo
