/*
 * ConcreteStates.cpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#include "ConcreteStates.hpp"

#include <iostream>
#include <chrono>
#include <thread>

#include "RobotArmContext.hpp"
#include "States.hpp"

RobotArmContext* AbstractRobotArmState::getContext()
{
	return dynamic_cast<RobotArmContext*>(AbstractState::getContext());
}

void InitState::doActivity()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool InitState::handleEvent(const Event& anEvent)
{
	switch (anEvent.getID())
	{
	case States::Events::evInitReady:
		getContext()->setCurrentState(
				RobotArmState_SPTR(new ReadyState(getContext())));
		return true;
	default:
		return false;
	}
}

void ReadyState::doActivity()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool ReadyState::handleEvent(const Event& anEvent)
{
	switch (anEvent.getID())
	{
	case States::Events::evTask:
		getContext()->setCurrentState(
				RobotArmState_SPTR(new ExecuteState(getContext())));
		return true;
	case States::Events::evSTOP:
		getContext()->setCurrentState(
				RobotArmState_SPTR(new StopState(getContext())));
		return true;
	default:
		return false;
	}
}

void ExecuteState::doActivity()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool ExecuteState::handleEvent(const Event& anEvent)
{
	switch (anEvent.getID())
	{
	case States::Events::evTaskDone:
		getContext()->setCurrentState(
				RobotArmState_SPTR(new ReadyState(getContext())));
		return true;
	case States::Events::evSTOP:
		getContext()->setCurrentState(
				RobotArmState_SPTR(new StopState(getContext())));
		return true;
	default:
		return false;
	}
}

void StopState::doActivity()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool StopState::handleEvent(const Event& anEvent)
{
	switch (anEvent.getID())
	{
	case States::Events::evSTOPdisable:
		getContext()->setCurrentState(
				RobotArmState_SPTR(new ReadyState(getContext())));
		return true;
	default:
		return false;
	}
}

