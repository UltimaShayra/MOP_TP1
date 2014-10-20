#ifndef DEF_CTRIANGLE
#define DEF_CTRIANGLE

class CTriangle
{
	public :
		CTriangle(float b, float l);
		float calculerSurface();
	
	private :
		float m_largeur, m_base;

};

#endif
