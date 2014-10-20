#ifndef DEF__CCMaison_H
#define DEF__CCMaison_H

//#include <vector>

#include "CFacade.h"

class CMaison
{
public:
	CMaison(int nbFacades);
	~CMaison();
	float calculerSurface();

	CFacade & GetFacade(int nFacade);
	void addFacade(CFacade facade);

private:

	std::vector<CFacade> m_facade;
	int m_nbFacade;
};


#endif
