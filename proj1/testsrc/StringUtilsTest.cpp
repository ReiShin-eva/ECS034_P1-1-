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
    
}

TEST(StringUtilsTest, LJust){
    
}

TEST(StringUtilsTest, RJust){
    
}

TEST(StringUtilsTest, Replace){
    
}

TEST(StringUtilsTest, Split){
    
}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}
