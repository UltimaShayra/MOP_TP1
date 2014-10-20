#include "CFacade.h"


#include <stdio.h>




CFacade::CFacade(int taillePignon = 0)
: CRectangle(0.f,0.f), m_possedePignon(false)
{
}

CFacade::CFacade(float haut, float larg, bool pignon, int taillePignon = 0 ) 
: CRectangle(haut, larg), m_possedePignon(pignon)
{
}

CFacade::~CFacade()
{
}

COuverture & CFacade::GetOuverture(int i)
{
	return m_ouverture[i];
}

void CFacade::addOuverture(COuverture ouverture)
{
	m_ouverture.push_back(ouverture);
}





float CFacade::calculerSurface()
{
	float tmp = CRectangle::calculerSurface();
	
	for (std::vector<COuverture>::iterator i = m_ouverture.begin(); i != m_ouverture.end(); i++)
	{
		tmp -= i->calculerSurface();
	}
	
	tmp += m_pignon->calculerSurface();
	
	return tmp;
}



