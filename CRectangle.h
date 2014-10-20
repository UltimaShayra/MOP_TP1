#ifndef DEF_CRECTANGLE
#define DEF_CRECTANGLE



class CRectangle
{
	public :
		CRectangle(float haut, float larg);
		~CRectangle(void);
		float calculerSurface();
		void setHauteur(float hauteur);
		void setLargeur(float largeur);
		float getHauteur();
		float getLargeur();
	
	private :
		float m_hauteur;
		float m_largeur;

};

#endif
