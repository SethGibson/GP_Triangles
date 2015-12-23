#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class GP_TrianglesApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void GP_TrianglesApp::setup()
{
}

void GP_TrianglesApp::mouseDown( MouseEvent event )
{
}

void GP_TrianglesApp::update()
{
}

void GP_TrianglesApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( GP_TrianglesApp, RendererGl )
