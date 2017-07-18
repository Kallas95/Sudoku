#ifndef CCASE_H
#define CCASE_H

#include <iostream>
#include <stdio.h>

class CCase
{
public:

	CCase();

	void v_init( int value, int positionX, int positionY ) ;

	void v_calculateBlock() ;

	void v_print() ;


	void setValue(int newvalue)
	{
		m_value = newvalue ;
	}
	int getValue()
	{
		return m_value ;
	}

	void setPositionX(int newpositionX)
	{
		m_position_x = newpositionX ;
	}
	int getPositionX()
	{
		return m_position_x ;
	}

	void setPositionY(int newpositionY)
	{
		m_position_y = newpositionY ;
	}
	int getPositionY()
	{
		return m_position_y ;
	}

	int getBlock()
	{
		return m_block ;
	}
	void setBlock( int newblock )
	{
		m_block = newblock ;
	}


private:

	int m_value ;
	int m_position_x ;
	int m_position_y ;
	int m_block ;
};

#endif