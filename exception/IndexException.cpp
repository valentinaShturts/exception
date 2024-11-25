#include "IndexException.h"

IndexException::IndexException(const string mes) :Exception(mes){}

const string IndexException::GetMessage() const
{
	return "**** " + m_message + " ****";
}