#include "DivideByZero.h"

DivideByZero::DivideByZero(const string mes) :Exception(mes){}

const string DivideByZero::GetMessage() const
{
	return "**** " + m_message + " ****";
}
