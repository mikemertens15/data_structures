#pragma once

template <typename T>
class Dynamic_Array
{
private:
    T *array;
    int capacity;
    int current;

public:
    Dynamic_Array()
    {
        array = new T[1];
        capacity = 1;
        current = 0;
    }

    ~Dynamic_Array()
    {
        delete[] array;
    }

    // Return size of array
    int size() { return current + 1; }

    // Function to get an element at a specific index
    T get(int index)
    {
        if (index < current)
            return array[index];
        throw std::out_of_range("Index is out of range");
    }

    // Function to get capacity of array
    int get_capacity() { return capacity; }

    // Add an element at end
    void push(T data)
    {
        if (current == capacity)
        {
            T *temp = new T[2 * capacity];

            for (int i = 0; i < capacity; i++)
            {
                temp[i] = array[i];
            }

            delete[] array;
            capacity *= 2;
            array = temp;
        }

        array[current] = data;
        current++;
    }

    // Remove the last element
    void pop()
    {
    }

    // Remove an element
    void remove();
};