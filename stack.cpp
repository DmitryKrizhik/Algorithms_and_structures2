#include <iostream>
using namespace std;

const int Max_size = 100;

class Stack
{
    int arr_stack[Max_size];
    int size, put_element, get_element;

public:
    Stack(int value_size)
    {
        if (value_size < 0)
            size = 1;
        else
            if (Max_size < value_size)
                size = 100;
            else
                size = value_size;

        put_element = get_element = 0;
    }

    void put(int value)
    {
        if (put_element == size)
        {
            cout << "The stack is full" << endl;
            return;
        }
        else
        {
            put_element++;
            get_element = put_element + 1;
            arr_stack[put_element] = value;
        }
    }

    int get()
    {
        if (get_element == -1)
        {
            cout << "The stack is empty" << endl;
            return 0;
        }
        else
        {
            get_element--;
            return arr_stack[get_element];
        }
    }

    int Top()
    {
        get_element = put_element;
        return arr_stack[get_element];
    }

    void Pop()
    {
        size--;
        cout << "\nRemoving an element from the top of the stack" << endl;
    }

    int Retrive(int number_element)
    {
        if (number_element > size || number_element <= 0)
        {
            cout << "This position is not on the stack" << endl;
            return -1;
        }
        else
        {
            int position = number_element - size;

            if (position == 0)
                position = size - 1;
            else
                if (position < 0)
                    position = -position;

            int i = 0;
            int j = size;
            while (true)
            {
                if (i == position)
                    return arr_stack[j];

                j--;
                i++;
            }
        }

    }

    int GetSize() { return size; }
};
