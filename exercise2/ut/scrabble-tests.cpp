#include "gtest/gtest.h"
#include "scrabble.hpp"

struct ScrabbleTest {};

TEST(ScrabbleTest, SingleLetter) {
  EXPECT_EQ(1, scrabble("a"));
}

TEST(ScrabbleTest, FullWord) {
  EXPECT_EQ(14, scrabble("cabbage"));
}

TEST(ScrabbleTest, AllLetters) {
  EXPECT_EQ(28, scrabble("adbfkjq"));
}

TEST(ScrabbleTest, EmptyString) {
  EXPECT_EQ(0, scrabble(""));
}   

