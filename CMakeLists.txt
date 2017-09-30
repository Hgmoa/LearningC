cmake_minimum_required(VERSION 3.8)
project(Learning_C)

set(CMAKE_C_STANDARD 99)

#SF is used as SOURCE_FILES short name
file(GLOB SF_Ejercicio_1 Ej1/*.*)
add_executable(myseq ${SF_Ejercicio_1})

file(GLOB SF_Ejercicio_2 Ej2/*.*)
add_executable(invert ${SF_Ejercicio_2})

file(GLOB SF_Ejercicio_3 Ej3/*.*)
add_executable(mycd ${SF_Ejercicio_3})