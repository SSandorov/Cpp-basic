#include <iostream>
// using namespace std;

//* Enums are a simple form of user-defined types for which we can enumerate its values

enum class Color
{
    red,
    blue,
    green,
};

enum class Traffic_light
{
    green,
    yellow,
    red,
};

Color col = Color::red;
Traffic_light light = Traffic_light::red;

//* An enum class has only assignment, initialization and comparison, but we can also add operators
Traffic_light& operator++( Traffic_light& t )   // prefix increment: ++
{
    switch (t)
    {
    case Traffic_light::green:
        return t = Traffic_light::yellow;
    
    case Traffic_light::yellow:
        return t = Traffic_light::red;
    
    case Traffic_light::red:
        return t = Traffic_light::green;
    }

    Traffic_light next = ++light;   // next becomes Traffic_light:: green
}

int main()
{
    
}