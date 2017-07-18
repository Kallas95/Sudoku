#include "CCase.h"

CCase::CCase() { }

void CCase::v_init (int value, int positionX, int positionY)
{
	m_value = value ;
	m_position_x = positionX ;
	m_position_y = positionY ;	
	v_calculateBlock() ;
}

void CCase::v_print()
{
	printf("value :  %i \n",m_value );
	printf("position :  [ %i, %i ]\n",m_position_x,m_position_y );
	printf("Block :  %i \n",m_block);

}

void CCase::v_calculateBlock() 
{
	if (m_position_x <= 3)
	 {
		if (m_position_y <= 3)
		{
			m_block = 1;	
		}
		else if (m_position_y <= 6)
		{
			m_block = 4;
		}	
		else
		{
			m_block = 7;
		}
	}
	else if (m_position_x <= 6)
	{
		if (m_position_y <= 3)
		{
			m_block = 2;	
		}
		else if (m_position_y <= 6)
		{
			m_block = 5;
		}	
		else
		{
			m_block = 8;
		}
	}
	else
	{
		if (m_position_y <= 3)
		{
			m_block = 3;	
		}
		else if (m_position_y <= 6)
		{
			m_block = 6;
		}	
		else
		{
			m_block = 9;
		}
	}
}