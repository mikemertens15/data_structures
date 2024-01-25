#pragma once

template <typename T>
class Dynamic_Array
{
private:
    T *array;
    int capacity;
    int current;

public:
    // Constructor
    Dynamic_Array()
    {
        array = new T[1];
        capacity = 1;
        current = 0;
    }

    // Constructor with initial capacity
    Dynamic_Array(int capacity)
    {
        array = new T[capacity];
        this->capacity = capacity;
        current = 0;
    }

    // Copy constructor
    Dynamic_Array(Dynamic_Array &arr)
    {
        this->capacity = arr.capacity;
        this->current = arr.current;
        this->array = new T[this->capacity];

        for (int i = 0; i < this->current; i++)
        {
            this->array[i] = arr.array[i];
        }
    }

    // Move constructor
    Dynamic_Array(Dynamic_Array &&arr)
    {
        this->capacity = arr.capacity;
        this->current = arr.current;
        this->array = arr.array;
        arr.array = nullptr;
    }

    // Destructor
    ~Dynamic_Array()
    {
        delete[] array;
    }

    // Return size of array
    int size() { return current + 1; }

    // access operator
    T &operator[](int index)
    {
        if (index < current)
            return array[index];
        throw std::out_of_range("Index is out of range");
    }

    // Copy assignment operator
    Dynamic_Array &operator=(Dynamic_Array &arr)
    {
        if (this == &arr)
            return *this;

        this->capacity = arr.capacity;
        this->current = arr.current;
        this->array = new T[this->capacity];

        for (int i = 0; i < this->current; i++)
        {
            this->array[i] = arr.array[i];
        }

        return *this;
    }

    // Move assignment operator
    Dynamic_Array &operator=(Dynamic_Array &&arr)
    {
        if (this == &arr)
            return *this;

        this->capacity = arr.capacity;
        this->current = arr.current;
        this->array = arr.array;
        arr.array = nullptr;

        return *this;
    }

    // Equality operator
    bool operator==(Dynamic_Array &arr)
    {
        if (this->size() != arr.size())
            return false;

        for (int i = 0; i < this->size(); i++)
        {
            if (this->array[i] != arr.array[i])
                return false;
        }

        return true;
    }

    // Inequality operator
    bool operator!=(Dynamic_Array &arr)
    {
        return !(*this == arr);
    }

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
        current--;
    }

    // Remove an element from a specific index
    void remove(int index)
    {
        if (index < current)
        {
            for (int i = index; i < current - 1; i++)
            {
                array[i] = array[i + 1];
            }
            current--;
        }
    }

    // Remove a specific value, if it exists
    // TODO: No case for if the value doesn't exist
    void remove_value(T value)
    {
        for (int i = 0; i < current; i++)
        {
            if (array[i] == value)
            {
                remove(i);
                break;
            }
        }
    }
};