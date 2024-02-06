#include "../include/Linked_List.h"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST(Linked_List_Test, Constructor)
{
    Linked_List<int> list;
    ASSERT_TRUE(list.is_empty());
}

TEST(Linked_List_Test, insert_at_front)
{
    Linked_List<int> list;
    list.insert_at_front(10);
    ASSERT_EQ(list.peek_front(), 10);
    list.insert_at_front(20);
    ASSERT_EQ(list.peek_front(), 20);
}

TEST(Linked_List_Test, insert_at_back)
{
    Linked_List<int> list;
    list.insert_at_back(10);
    ASSERT_EQ(list.peek_back(), 10);
    list.insert_at_back(20);
    ASSERT_EQ(list.peek_back(), 20);
}

TEST(Linked_List_Test, delete_front)
{
    Linked_List<int> list;
    list.insert_at_front(10);
    list.insert_at_front(20);
    list.delete_front();
    ASSERT_EQ(list.peek_front(), 10);
}

TEST(Linked_List_Test, delete_back)
{
    Linked_List<int> list;
    list.insert_at_back(10);
    list.insert_at_back(20);
    list.delete_back();
    ASSERT_EQ(list.peek_back(), 10);
}

TEST(Linked_List_Test, delete_value)
{
    Linked_List<int> list;
    list.insert_at_front(10);
    list.delete_value(10);
    ASSERT_TRUE(list.is_empty());
}

TEST(Linked_List_Test, search)
{
    Linked_List<int> list;
    list.insert_at_front(10);
    Node<int> *result = list.search(10);
    ASSERT_NE(result, nullptr);
    ASSERT_EQ(result->data, 10);
}

TEST(Linked_List_Test, sort)
{
    Linked_List<int> list;
    list.insert_at_front(10);
    list.insert_at_front(20);
    list.insert_at_front(5);
    list.sort();
    ASSERT_EQ(list.peek_front(), 5);
    ASSERT_EQ(list.peek_back(), 20);
}