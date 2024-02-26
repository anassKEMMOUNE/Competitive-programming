cmake_minimum_required(VERSION 3.27)
project(Competitive_programming)

set(CMAKE_CXX_STANDARD 14)

add_executable(CSES
        "CSES/Introductory Problems/Digit_Queries.cpp")

add_executable(MNPC2023-G
        "MNPC2023/G.cpp"
        )

add_executable(MNPC2023-D
        "MNPC2023/D.cpp"
)
add_executable(MNPC2023-E
        "MNPC2023/E.cpp"
)
