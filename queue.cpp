#include <iostream>

// template <typename T>
class Queue
{
private:
    int n;
    int TOP = -1;
    int END = -1;
    int *array;
    int LIMIT;

public:
    Queue(int n)
    {
        if (n <= 0)
        {
            throw std::invalid_argument("INVALID SIZE\n");
        }
        array = new int[n];
        LIMIT = n;
    }

    void ENQUEUE(int x)
    {
        if (TOP == 0 || END == LIMIT - 1)
        {
            throw std::invalid_argument("OVERFLOW");
        }
        this->array[END++] = x;
    }

    void DEQUEUE()
    {
        if (TOP == -1 && END == -1)
        {
            throw std::invalid_argument("UNDERFLOW");
        }
        this->array[TOP++] = 0;
        for (int i = TOP; i <= END; i++)
        {
            array[TOP - 1] = array[TOP];
        }
        END--;
        TOP--;
    }

    void PRINT()
    {
        for (int i = TOP; i < END; i++)
        {
            std::cout << array[i] << std::endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Queue queue(4);
    queue.ENQUEUE(6);
    queue.ENQUEUE(3);
    queue.ENQUEUE(4);
    queue.ENQUEUE(7);
    queue.PRINT();
    std::cout << "\n";
    queue.DEQUEUE();
    queue.PRINT();
    queue.ENQUEUE(3);
    queue.ENQUEUE(4);
    return 0;
}
