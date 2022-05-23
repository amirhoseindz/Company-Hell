cmake_minimum_required(VERSION 3.17)
project(OOP3)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(OOP3
        include/Artist.h
        include/Employee.h
        include/Enum.h
        include/Guard.h
        include/Gun.h
        include/Person.h
        include/PersonalInfo.h
        include/Programmer.h
        include/WorkStuffInfo.h
        lib/Artist.cpp
        lib/Employee.cpp
        lib/Enum.cpp
        lib/Guard.cpp
        lib/Gun.cpp
        lib/Person.cpp
        lib/PersonalInfo.cpp
        lib/Programmer.cpp
        lib/WorkStuffInfo.cpp
        test/main.cpp)
