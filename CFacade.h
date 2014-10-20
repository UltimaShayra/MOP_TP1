#include "CPorte.h"
#include "CFenetre.h"
#include "CRectangle.h"
#include "CPignon.h"


#include <vector>


class CFacade : public CRectangle
{
	public :
	
		CFacade(int taillePignon);
		CFacade(float haut, float larg, bool pignon, int taillePignon);
		~CFacade();

		COuverture & GetOuverture(int i);
		void addOuverture(COuverture ouverture);
		float calculerSurface();
			
	private :

		bool m_possedePignon;
		CPignon *m_pignon; //avec le new

		std::vector<COuverture> m_ouverture;

};
