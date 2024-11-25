#pragma once
#include "Exception.h"

class IndexException : public Exception
{
public:
	IndexException(const string mes);
	virtual const string GetMessage()  const override;
};

