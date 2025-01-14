# exercise2/ut/CMakeLists.txt

add_executable(ScrabbleTests
    scrabble-tests.cpp)

target_link_libraries(ScrabbleTests PUBLIC gtest_main)

add_test(NAME ScrabbleTests
        COMMAND ScrabbleTests --gtest_output=xml:${CMAKE_BINARY_DIR}/junit/exercise2.junit.xml)