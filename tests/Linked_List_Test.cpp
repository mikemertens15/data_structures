#include "../include/Linked_List.h"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST(Linked_List_Test, insert_at_front)
{
    Linked_List<int> list;
    list.insert_at_front(10);
    ASSERT_EQ(list.peek_front(), 10);
}

TEST(Linked_List_Test, search)
{
    Linked_List<int> list;
    list.insert_at_front(10);
    Node<int> *result = list.search(10);
    ASSERT_NE(result, nullptr);
    ASSERT_EQ(result->data, 10);
}

TEST(Linked_List_Test, delete_value)
{
    Linked_List<int> list;
    list.insert_at_front(10);
    list.delete_value(10);
    ASSERT_TRUE(list.is_empty());
}