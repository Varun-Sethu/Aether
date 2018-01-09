cmake_minimum_required(VERSION 3.9)
project(Aether)

set(CMAKE_CXX_STANDARD 17)

set(CXX g++)
set(CXXFLAGS -g -std=c++17 -Wall -pedantic)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

INCLUDE_DIRECTORIES( Aether/libs/boost/boost )


if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
endif(MSVC)


add_executable(Aether
        Aether/src/Aether/Common/Errors/Errors.cpp
        Aether/src/Aether/Common/Errors/Errors.h
        Aether/src/Aether/Common/Util/Macros.h
        Aether/src/Aether/Common/Util/Options.h
        Aether/src/Aether/Stargazer/Lexer/Lexer.h
        Aether/src/Aether/Stargazer/Lexer/Token.h Aether/src/Aether/Common/Automata/Automata.h)