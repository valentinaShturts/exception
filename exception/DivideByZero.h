#pragma once
#include "Exception.h"
class DivideByZero : public Exception
{
public:
	DivideByZero(const string mes);
	virtual const string GetMessage()  const override;
};

