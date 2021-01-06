#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_
#include "src/Physics/Vector2D.h"
class Transform
{
public:
    float m_x, m_y;
    Transform(float x = 0, float y = 0): m_x(x), m_y(y) {}
    
public:
    
    inline void translate_x(float x){m_x += x;}
    inline void translate_y(float y){m_y += y;}
    inline void translate(Vector2D &vec){++ vec;}

};

#endif // _TRANSFORM_H_
