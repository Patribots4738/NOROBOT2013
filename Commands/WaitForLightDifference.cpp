#include "WaitForLightDifference.h"

WaitForLightDifference::WaitForLightDifference() {
	Requires(elevator);
}

void WaitForLightDifference::Initialize(){
	//no initialization
}

void WaitForLightDifference::Execute(){
	//the function, it does nothing!
}

bool WaitForLightDifference::IsFinished(){
	//this command waits for a value difference of 20
	//and returns true
	if ((elevator->getLowerLightValue() - elevator->getUpperLightValue()) > 20 )
	{
		return true;
	}
	else
	{
		return false;
	}
}
	//bottom two are empty on purpose
void WaitForLightDifference::End(){
	
}

void WaitForLightDifference::Interrupted(){
	
}