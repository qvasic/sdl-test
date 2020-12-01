#ifndef GRAPHICALELEMENT_H_OASDFUIHASOUDFIASODIUFH2P34HRF2349
#define GRAPHICALELEMENT_H_OASDFUIHASOUDFIASODIUFH2P34HRF2349

#include "SDLLibrary.h"

namespace graphical
{

class Element
{
public:
    virtual void draw( const sdl::Renderer& ) = 0;
    virtual ~Element( );
};

class Group : public Element
{};

class Line : public Element
{
public:
    Line( int x1, int y1, int x2, int y2 );
    void draw( const sdl::Renderer& ) override;

private:
    int m_x1;
    int m_y1;
    int m_x2;
    int m_y2;
};

class Ellipse : public Element
{};

class Rectangle : public Element
{};

} // namespace graphical

#endif // GRAPHICALELEMENT_H
