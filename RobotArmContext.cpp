/*
 * RobotArmContext.cpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#include "RobotArmContext.hpp"

#include <iostream>
#include "ConcreteStates.hpp"
#include <thread>

/**
 * @brief Typedef to make the type shorter and more readable
 */
typedef std::shared_ptr<AbstractRobotArmState> RobotArmState_SPTR;

RobotArmContext::RobotArmContext() : Context()
{
	setCurrentState(RobotArmState_SPTR(new InitState(this)));
}

RobotArmContext::~RobotArmContext()
{
}

void RobotArmContext::addRobotArmEvent(States::Events event)
{
	currentState->handleEvent(Event(event)); // for direct event handling
}

void RobotArmContext::handleNotification()
{
}


