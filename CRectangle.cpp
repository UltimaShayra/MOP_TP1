#include "CRectangle.h"

CRectangle::CRectangle(float haut, float larg)
: m_hauteur(haut), 
m_largeur(larg)
{
}

CRectangle::~CRectangle(void)
{

}

float CRectangle::calculerSurface()
{
	return m_hauteur * m_largeur;	
}	


void CRectangle::setHauteur(float hauteur)
{
	m_hauteur = hauteur;
}

void CRectangle::setLargeur(float largeur)
{
	m_largeur = largeur;
}


float CRectangle::getHauteur()
{
	return m_hauteur;
}

float CRectangle::getLargeur()
{
	return m_largeur;
}