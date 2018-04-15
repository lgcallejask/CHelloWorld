2) gcc hello2.c -E -P -o hello.i  
El archivo generado contiene el reslutado del preprocesamiento, que es el codigo en el archivo hello2.c con las declaraciones de la libreria stdio.h.

4) int printf(const char *s, ...);  
Se declara printf. Devuelve un entero que es la cantidad de caracteres. El primer parametro son caracteres. Los tres puntos indican una cantidad variable de parametros.

5) gcc hello3.c -E -P -o hello3.i  
La diferencia entre hello2.i y hello3.i es que el ultimo solo contiene la delcaracion de printf mientras que el otro toda la libreria stdio.h.

6) gcc hello3.i -S

7) gcc hello4.c -S

8) El archivo hello4.c contiene las instrucciones definidas en assembler.

9) gcc hello4.c -c

10) gcc hello4.c -o hello4  
	hello4.exe > punto4output.txt
	
11) gcc hello5.c -o hello5
	
12) hello5.exe > punto5output.txt  
	se obtiene el resultado esperado.
	
13) No hay errores.

15) gcc hello7.c -o hello7  
Funciona poque se hace una declaracion implicita de la funcion printf.
