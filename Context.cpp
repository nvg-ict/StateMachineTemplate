/*
 * Context.cpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#include "Context.hpp"
#include <iostream>

Context::Context() : currentState(nullptr)
{
}

Context::~Context()
{
}

void Context::setCurrentState(State_SPTR aState)
{
	currentState = aState;
	currentState->doActivity();
}
