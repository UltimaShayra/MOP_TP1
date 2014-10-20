#include "CMaison.h"


CMaison::CMaison(int nbFacades) : m_nbFacade(nbFacades)
{
}

CMaison::~CMaison()
{
}

CFacade & CMaison::GetFacade(int nFacade)
{
	return m_facade[nFacade];
}

void CMaison::addFacade(CFacade facade)
{
	m_facade.push_back(facade);
}

float CMaison::calculerSurface()
{
	float tmp = 0;

	for (int i = 0; i < m_nbFacade; i++)
		tmp += m_facade[i].calculerSurface();
	
	return tmp;
}
