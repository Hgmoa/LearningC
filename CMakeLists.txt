cmake_minimum_required(VERSION 3.8)
project(Learning_C)

set(CMAKE_C_STANDARD 99)

#SF is used as SOURCE_FILES short name
set(SF_Ejercicio_1 Ej1/Ejercicio1.c Ej1/Ejercicio1.h)
add_executable(Ejercicio_1 ${SF_Ejercicio_1})

set(SF_Ejercicio_2 Ej2/Ejercicio2.c Ej2/Ejercicio2.h)
add_executable(Ejercicio_2 ${SF_Ejercicio_2})