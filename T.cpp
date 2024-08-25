#include "T.h"

Test::Tool::Tool(int b[],int c)
{
    this->n=c;
    this->arr=new int [this->n];
    for (int i = 0; i < this->n; i++)
    {
        arr[i]=b[i];
    }

    for (int i = 0; i < this->n - 1; i++)
    {
        for (int j = 0; j < this->n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float Test::Tool::average()
{
    int b = 0;
    for (int i = 0; i < this->n; i++)
    {
        b += this->arr[i];
    }
    return b / (this->n + 0.0);
}

float Test::Tool::median()
{
    if (this->n % 2)
        return this->arr[(this->n - 1) / 2];
    else
        return (this->arr[this->n / 2] + this->arr[this->n / 2 - 1]) / 2.0;
}

float Test::Tool::variance(float x)
{
    int b = 0;
    for (int i = 0; i < this->n; i++)
    {
        b += (this->arr[i] - x) * (this->arr[i] - x);
    }
    return b / (this->n + 0.0);
}

float Test::Tool::range()
{
    return this->arr[this->n - 1] - this->arr[0];
}

void Test::Tool::mode(int b[])
{
    //TODO
    
}

Test::Tool::~Tool()
{
    //不需要写
}
