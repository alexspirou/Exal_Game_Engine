#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_
#include <iostream>
class Vector2D
{
    
public:
    float m_x, m_y;
    
    //Constructor
    Vector2D(float x = 0, float y = 0): m_x(x), m_y(y) {}

    //Operator Overloading
    // << 
    friend std::ostream &operator << (std::ostream& output, Vector2D &v)
    {
       return output<<"(" <<v.m_x << "," << v.m_y << ")" << std::endl;
        
    }
    void print(const char* name, Vector2D vec)
    {
        std::cout << name << ":" << "(x,y) = " << vec << std::endl;
    }
    // +
    Vector2D operator+(const Vector2D& v2) const
    {
        return Vector2D(m_x + v2.m_x, m_y + v2.m_y); 
    }
    // -
    Vector2D operator-(const Vector2D& v2) const
    {
        return Vector2D(m_x - v2.m_x, m_y - v2.m_y);
    }
    // *
    Vector2D operator*(float scalar) 
    {
        return Vector2D(m_x * scalar, m_y * scalar);
    }
    // /
    Vector2D operator/(float scalar) const
    {   
        if (scalar!=0)
        return Vector2D(m_x / scalar, m_y / scalar);
        else
            std::cout << "Forbidden divide with " << scalar << std::endl;
    }
    
    Vector2D operator*=(float scalar);
    Vector2D operator/=(float scalar);
    
    // = 
    Vector2D &operator=( Vector2D &rhs)
    {
        if (this == &rhs )
            return *this;
        m_x = rhs.m_x;
        m_y = rhs.m_y;
        return *this;
    }
    // ==
    bool operator==( Vector2D &rhs)
    {
        if (rhs.m_x and rhs.m_x == m_x and m_y)
            return true;
        else 
            return false;
    }
};

#endif // _VECTOR2D_H_
