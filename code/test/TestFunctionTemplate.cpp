#include <gtest/gtest.h>
#include <tlpbook/FunctionTemplate.h>

USING_TLPBOOK_NS

TEST(TestFunctionTemplate, max_template)
{
    ASSERT_EQ(3, max(2, 3));
}

TEST(TestFunctionTemplate, max_for_const_char_str)
{
    ASSERT_EQ(0, strcmp("cd", max("abc", "cd")));
}

TEST(TestFunctionTemplate, sum_test)
{
    ASSERT_EQ(6, sum(4, 2));
}
