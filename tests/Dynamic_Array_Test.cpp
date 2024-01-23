#include <stdexcept>
#include "../include/Dynamic_Array.h"
#include "../googletest/googletest/include/gtest/gtest.h"

// Test for constructor functionality
TEST(Dynamic_ArrayTest, Construct)
{
    Dynamic_Array<int> arr;
    EXPECT_EQ(arr.size(), 0);
    EXPECT_GE(arr.get_capacity(), 0);
}

// Test for adding elements
TEST(Dynamic_ArrayTest, AddElements)
{
    Dynamic_Array<int> arr;
    arr.push(1);
    arr.push(2);

    EXPECT_EQ(arr.size(), 2);
    EXPECT_EQ(arr.get(0), 1);
    EXPECT_EQ(arr.get(1), 2);
}

// Test for accessing elements
TEST(Dynamic_ArrayTest, AccessElements)
{
    Dynamic_Array<int> arr;
    arr.push(1);
    arr.push(2);

    EXPECT_EQ(arr.get(0), 1);
    EXPECT_EQ(arr.get(1), 2);
    EXPECT_THROW(arr.get(2), std::out_of_range);
}

// Test for capacity
TEST(Dynamic_ArrayTest, Capacity)
{
    Dynamic_Array<int> arr;
    int initialCapacity = arr.get_capacity();
    for (int i = 0; i < initialCapacity; ++i)
    {
        arr.push(i);
    }

    EXPECT_EQ(arr.size(), initialCapacity);
    arr.push(initialCapacity);
    EXPECT_GT(arr.get_capacity(), initialCapacity);
}

// Test for removing elements
TEST(Dynamic_ArrayTest, RemoveElements)
{
    Dynamic_Array<int> arr;
    arr.push(1);
    arr.push(2);
    arr.pop();

    EXPECT_EQ(arr.size(), 1);
    EXPECT_EQ(arr.get(0), 1);
    EXPECT_THROW(arr.get(1), std::out_of_range);
}

// Test for copy constructor
TEST(Dynamic_ArrayTest, CopyConstructor)
{
    Dynamic_Array<int> arr1;
    arr1.push(1);
    arr1.push(2);

    Dynamic_Array<int> arr2 = arr1;
    EXPECT_EQ(arr2.size(), arr1.size());
    EXPECT_EQ(arr2.get(0), arr1.get(0));
    EXPECT_EQ(arr2.get(1), arr1.get(1));
}

// Test for assignment operator
TEST(Dynamic_ArrayTest, AssignmentOperator)
{
    Dynamic_Array<int> arr1;
    arr1.push(1);
    arr1.push(2);

    Dynamic_Array<int> arr2;
    arr2 = arr1;
    EXPECT_EQ(arr2.size(), arr1.size());
    EXPECT_EQ(arr2.get(0), arr1.get(0));
    EXPECT_EQ(arr2.get(1), arr1.get(1));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}