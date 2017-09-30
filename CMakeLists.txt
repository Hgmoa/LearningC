cmake_minimum_required(VERSION 3.8)
project(Learning_C)

set(CMAKE_C_STANDARD 99)

#SF is used as SOURCE_FILES short name
set(SF_Ejercicio_1 Ej1/*)
add_executable(myseq ${SF_Ejercicio_1})

set(SF_Ejercicio_2 Ej2/*)
add_executable(invert ${SF_Ejercicio_2})

set(SF_Ejercicio_3 Ej3/*)
