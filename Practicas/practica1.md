## Objetivo

Crear llamadas al sistema para apagar y reiniciar el sistea operativo

#Herramientas
git
make
gcc

## Conceptos
1) Llamada al sistema
+ Forma en que el kernel da acceso al HW
+ Se implementa mediante interrupciones


2) Modo Kernel
+ Bit/Registro que activa el CPU para acceder al HW
+ Solo hay un programa que se ejecuta con este bit, el kernel

3) Interrupciones
+ Es la forma que el HW interactua con el cpu

#Link de cambios
https://github.com/DiegoDeDios/DiegOS/commit/12cc18cef9283f93d32444decb611c0bf7ec0c5b

##Que aprendí
Nos la rifamos programando las funciones de apagado y reiniciar el sistema operativo. No sabía que C tenía funciones de tan bajo nivel para escribir valores en secciones de memoria especificas
