/*
    https://learn.microsoft.com/en-us/cpp/cpp/constructors-cpp?view=msvc-170
    You can define as many overloaded constructors as needed 
    to customize initialization in various ways. Typically, 
    constructors have public accessibility so that code outside 
    the class definition or inheritance hierarchy can create objects 
    of the class. But you can also declare a constructor as protected 
    or private.

    Constructors can optionally take a member initializer list. It's 
    a more efficient way to initialize class members than assigning 
    values in the constructor body. The following example shows a class 
    Box with three overloaded constructors. The last two use member 
    init lists:
*/

class Box {
public:
    // Default constructor
    Box() {}

    // Initialize a Box with equal dimensions (i.e. a cube)
    explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
    {}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}

    int Volume() { return m_width * m_length * m_height; }

private:
    // Will have value of 0 when default constructor is called.
    // If we didn't zero-init here, default constructor would
    // leave them uninitialized with garbage values.
    int m_width{ 0 };
    int m_length{ 0 };
    int m_height{ 0 };
};

/*
    When you declare an instance of a class, the compiler chooses
    which constructor to invoke based on the rules of overload 
    resolution:
*/
int main()
{
    Box b; // Calls Box()

    // Using uniform initialization (preferred):
    Box b2 {5}; // Calls Box(int)
    Box b3 {5, 8, 12}; // Calls Box(int, int, int)

    // Using function-style notation:
    Box b4(2, 4, 6); // Calls Box(int, int, int)
}