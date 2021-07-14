#include "StackFunction.h"



StackFunction::StackFunction()
{
	
}
void StackFunction::putIn(System::String^x) {
	A+= x;
}
System::String^StackFunction::putOut() {
	
	return System::Convert::ToString(A);
}
void StackFunction::endStack() {
	A = "";
}

