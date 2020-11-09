set(BINARY ${CMAKE_PROJECT_NAME})

# add_executable(ExampleProject main.cpp file1.cpp file1.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES} Menu.cpp Menu.h FileManager.cpp FileManager.h ReadManager.cpp ReadManager.h Enfermedad.h Enfermedad.cpp Paciente.cpp Paciente.h Analisis2.cpp Analisis2.h Analisis3.cpp Analisis3.h)