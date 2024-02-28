cmake_minimum_required(VERSION 3.27)
project(Competitive_programming)

set(CMAKE_CXX_STANDARD 14)

add_executable(CSES-Digit_queries
        "CSES/Introductory Problems/Digit_Queries.cpp")

add_executable(CSES-sum_3_values
        "CSES/Sorting&Searching/Sum_of_three_values.cpp")

add_executable(CSES-sum_4_values
        "CSES/Sorting&Searching/Sum_of_four_values.cpp")

add_executable(CSES-Josephus_Problem_I
        "CSES/Sorting&Searching/Josephus_problem_I.cpp")

add_executable(CSES-Josephus_Problem_II
        "CSES/Sorting&Searching/Josephus_problem_II.cpp")

add_executable(MNPC2023-G
        "MNPC2023/G.cpp"
        )

add_executable(MNPC2023-D
        "MNPC2023/D.cpp"
)
add_executable(MNPC2023-E
        "MNPC2023/E.cpp"
)
