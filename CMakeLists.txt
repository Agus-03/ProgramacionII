cmake_minimum_required(VERSION 3.24)
project(ProgramacionII CXX)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)
add_executable(ProgramacionII main.cpp Clientes.cpp Tarjetas.cpp Transacciones.cpp Archivos.cpp Archivos.cpp)
