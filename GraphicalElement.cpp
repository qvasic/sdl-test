#include "GraphicalElement.h"

graphical::Element::~Element( ) = default;

graphical::Line::Line( int x1, int y1, int x2, int y2 )
    : m_x1( x1 )
    , m_y1( y1 )
    , m_x2( x2 )
    , m_y2( y2 )
{}

void
graphical::Line::draw( const sdl::Renderer& renderer )
{
    renderer.draw_line( m_x1, m_y1, m_x2, m_y2 );
}
