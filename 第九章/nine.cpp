#include "nine.h"

int nine::height;

nine::nine(int h,int w,int l)
{
	height = h;
	width = w;
	length = l;
	p = new char[100];
}

 
nine::~nine()
{
	delete p;
}

int nine::volume()
{
	return height*width*length;
}