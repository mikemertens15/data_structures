add_executable(RunLinkedListTests
    structures/testLinkedList.cpp
)
target_link_libraries(RunLinkedListTests DataStructures)

add_executable(RunStackTests
    structures/testStack.cpp
)
target_link_libraries(RunStackTests DataStructures)