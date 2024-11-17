cmake_minimum_required(VERSION 3.10)

# Укажите имя проекта
project(BinaryToolkit)

# Укажите стандарт C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Укажите директорию с заголовочными файлами
include_directories(include)

# Укажите исходные файлы
set(SOURCES
    "../src/main.cpp"
    "../src/handler.cpp"
    "../src/mkbin.cpp"
    "../src/stuff.cpp"
)

# Создайте исполняемый файл
add_executable(BinaryToolkit ${SOURCES})
