#include <iostream>
using namespace std;

const int Max_size = 100;

class Queue
{
    int arr_queue[Max_size];
    int size, put_element, get_element;

public:
    Queue(int value_size)
    {
        if (value_size < 0)
            size = 1;
        else
            if (Max_size < value_size)
                size = 100;

        size = value_size;

        put_element = get_element = 0;
    }

    void put(int value)
    {
        if (put_element == size)
        {
            cout << "The queue is full" << endl;
            return;
        }
        else
        {
            put_element++;
            arr_queue[put_element] = value;
        }
    }

    int get()
    {
        if (get_element == size)
        {
            cout << "The queue is empty" << endl;
            return 0;
        }
        else
        {
            get_element++;
            return arr_queue[get_element];
        }
    }

    int Front()
    {
        if (1 <= size)
        {
            int temp;
            temp = get_element;
            get_element = 0;
            cout << "\nFirst element of queue" << this->get();
            get_element = temp;
            return arr_queue[1];
        }
        else
            cout << "The queue is empty" << endl;
    }

    void EnQueue()
    {
        size++;
        int x;
        cout << "Enter the value you want to add to the end of the queue: ";
        cin >> x;
        this->put(x);
    }

    int Retrive(int number)
    {
        int temp = get_element;
        get_element = number - 1;
        cout << "Element number " << get_element << " contains the value " << this->get();
        int temp1 = this->get();
        get_element = temp;
        return temp1;
    }

    int GetSize() { return size; }
};
