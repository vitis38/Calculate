#pragma once
#include "StackFunction.h"
ref class StackFunction
{
private:
	
	System::String ^A;
	
	int i=0;
public:
	StackFunction();
	void putIn(System::String^);
	System::String^putOut();
	void endStack();
};

