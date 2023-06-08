cmake_minimum_required(VERSION 3.24)
project(ProgramacionII CXX)  # Cambiado de C a CXX para usar C++

set(CMAKE_CXX_STANDARD 17)  # Cambiado a CXX_STANDARD para usar C++

include_directories(.)
add_executable(ProgramacionII main.cpp Clientes.cpp Tarjetas.cpp Transacciones.cpp)  # Se eliminó la duplicación de Clientes.cpp
