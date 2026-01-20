#include <gtest/gtest.h>
#include "StringUtils.h"

TEST(StringUtilsTest, SliceTest){
    EXPECT_EQ(Slice("abcdef", 1, 4), "bcd");
    EXPECT_EQ(Slice("abcdef", -3), "def"); 
    EXPECT_EQ(Slice("abcdef", 2), "cdef"); 
    EXPECT_EQ(Slice("abc", 5, 6), "");
    EXPECT_EQ(Slice("", 0, 0), "");
}

TEST(StringUtilsTest, Capitalize){
    EXPECT_EQ(Capitalize("hello"), "Hello");
    EXPECT_EQ(Capitalize("HELLO"), "Hello");
    EXPECT_EQ(Capitalize("hEllo"), "Hello");
    EXPECT_EQ(Capitalize(""), "");
    EXPECT_EQ(Capitalize("a"), "A");
}

TEST(StringUtilsTest, Upper){
    EXPECT_EQ(Upper("hello"), "HELLO");
    EXPECT_EQ(Upper("HeLlo"), "HELLO");
    EXPECT_EQ(Upper(""), "");

}

TEST(StringUtilsTest, Lower){
    EXPECT_EQ(Lower("hello"), "hello");
    EXPECT_EQ(Lower("HeLlo"), "hello");
    EXPECT_EQ(Lower(""), "");
}

TEST(StringUtilsTest, LStrip){
    EXPECT_EQ(LStrip("    abc"), "abc");
    EXPECT_EQ(LStrip("abc"), "abc");
    EXPECT_EQ(LStrip("    "), "");
    EXPECT_EQ(LStrip(""), "");
    
}
//mistake made, LStrip used not RStrip
TEST(StringUtilsTest, RStrip){
    EXPECT_EQ(RStrip("abc    "), "abc");
    EXPECT_EQ(RStrip("abc"), "abc");
    EXPECT_EQ(RStrip("    "), "");
    EXPECT_EQ(RStrip(""), "");
}

TEST(StringUtilsTest, Strip){
    EXPECT_EQ(Strip("    abc    "), "abc");
    EXPECT_EQ(Strip("abc"), "abc");
    EXPECT_EQ(Strip("    "), "");
    EXPECT_EQ(Strip(""), "");
}

TEST(StringUtilsTest, Center){
    EXPECT_EQ(Center("poop", 6), " poop ");
    EXPECT_EQ(Center("poop", 2), "poop");
    EXPECT_EQ(Center("", 4), "    ");
    EXPECT_EQ(Center("poop", 6, '*'), "*poop*");
}

TEST(StringUtilsTest, LJust){
    EXPECT_EQ(LJust("poop", 6), "poop  ");
    EXPECT_EQ(LJust("poop", 2), "poop");
    EXPECT_EQ(LJust("", 4), "    ");
    EXPECT_EQ(LJust("poop", 6, '*'), "poop**");
}

TEST(StringUtilsTest, RJust){
    EXPECT_EQ(RJust("poop", 6), "  poop");
    EXPECT_EQ(RJust("poop", 2), "poop");
    EXPECT_EQ(RJust("", 4), "    ");
    EXPECT_EQ(RJust("poop", 6, '*'), "**poop");
}

TEST(StringUtilsTest, Replace){
    EXPECT_EQ(Replace("skibidi", "i", "o"), "skobodo");
    EXPECT_EQ(Replace("aaa", "aa", "b"), "ba");
    EXPECT_EQ(Replace("aaa", "", "o"), "aaa");
    EXPECT_EQ(Replace("", "i", "o"), "");
}

TEST(StringUtilsTest, Split){
    
}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}
