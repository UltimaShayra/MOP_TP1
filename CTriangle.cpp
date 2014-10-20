#include "CTriangle.h"

CTriangle::CTriangle(float b, float l) 
: m_base(b), m_largeur(l)
{
}

float CTriangle::calculerSurface()
{
	return m_base * m_largeur / 2;	
}	

