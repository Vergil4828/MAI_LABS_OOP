#include <gtest/gtest.h>
#include "../include/change_symbol_text.h"

TEST(test_01, Positive_basic_test_case)
{   
    // Тест из примера в задании
    EXPECT_EQ(change_symbol_text("Vader said: No, I am your father!", 2, 'a', 'o'), "Vader soid: No, I am your fother!");
}

TEST(test_01, Positive_boundary_n_test_case)
{
    // Тест на граничное значение n=1
    EXPECT_EQ(change_symbol_text("AAABBBCCC", 1, 'B', 'F'), "AAAFFFCCC");
}

TEST(test_02, Negative_zero_test_case)
{
    // Тест на n равное 0
    EXPECT_EQ(change_symbol_text("Vader said: No, I am your father!", 0, 'a', 'o'), "Vader said: No, I am your father!");
}

TEST(test_02, Negative_n_is_negative_test_case)
{
    // Тест на n меньше чем 0
    EXPECT_EQ(change_symbol_text("Vader said: No, I am your father!", -1, 'a', 'o'), "Vader said: No, I am your father!");
}

TEST(test_03, Negative_old_value_not_in_string_test_case)
{
    // Тест на old_value которого нет в строке
    EXPECT_EQ(change_symbol_text("Vader said: No, I am your father!", 1, '?', '!'), "Vader said: No, I am your father!");
}

TEST(test_03, Negative_old_value_count_less_n_test_case)
{
    // Тест на old_value, который встречается в строке меньше чем n раз
    EXPECT_EQ(change_symbol_text("Vader said: No, I am your father!", 3, 'd', 'V'), "Vader said: No, I am your father!");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}