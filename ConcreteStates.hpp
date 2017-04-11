/*
 * ConcreteStates.hpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#ifndef CONCRETESTATES_HPP_
#define CONCRETESTATES_HPP_

#include "AbstractState.hpp"
#include <iostream>

#include "RobotArmContext.hpp"

/**
 * @brief This class inherits AbstractState and is responsible to set and get the RobotArmContext.
 */
class AbstractRobotArmState : public AbstractState
{
public:
	/**
	 * @brief Implemented constructor to set the RobotArmContext.
	 * @param aRobotArmContext
	 */
	explicit AbstractRobotArmState(RobotArmContext* aRobotArmContext) : AbstractState(aRobotArmContext){}

	/**
	 * @brief Getter to get the current Context.
	 * @return the current RobotArmContext
	 */
	RobotArmContext* getContext();

	/**
	 * @brief Typedef to make the type shorter and more readable
	 */
	typedef std::shared_ptr<AbstractRobotArmState> RobotArmState_SPTR;
};

/**
 * @brief This class represents an individual state and inherits AbstractRobotArmState and contains the functions to respond to events.
 */
class InitState: public AbstractRobotArmState
{
public:
	/**
	 * @brief Implemented constructor to set the RobotArmContext.
	 * @param aRobotArmContext
	 */
	explicit InitState(RobotArmContext* aRobotArmContext) : AbstractRobotArmState(aRobotArmContext){}

	/**
	 * @brief Implemented destructor of this state.
	 */
	~InitState(){};

	/**
	 * @brief Function to do an activity
	 */
	/*virtual*/ void doActivity();

	/**
	 * @brief Function to handle an event
	 * @param anEvent the event that triggers the state change
	 * @return true if the event is successfully handled, false if the event is ignored
	 */
	/*virtual*/ bool handleEvent(const Event& anEvent);
};

class ReadyState: public AbstractRobotArmState
{
public:
	/**
	 * @brief Implemented constructor to set the RobotArmContext.
	 * @param aRobotArmContext
	 */
	explicit ReadyState(RobotArmContext* aRobotArmContext) : AbstractRobotArmState(aRobotArmContext){}

	/**
	 * @brief Implemented destructor of this state.
	 */
	~ReadyState(){};

	/**
	 * @brief Function to do an activity
	 */
	/*virtual*/ void doActivity();

	/**
	 * @brief Function to handle an event
	 * @param anEvent the event that triggers the state change
	 * @return true if the event is successfully handled, false if the event is ignored
	 */
	/*virtual*/ bool handleEvent(const Event& anEvent);
};

class ExecuteState: public AbstractRobotArmState
{
public:
	/**
	 * @brief Implemented constructor to set the RobotArmContext.
	 * @param aRobotArmContext
	 */
	explicit ExecuteState(RobotArmContext* aRobotArmContext) : AbstractRobotArmState(aRobotArmContext){}

	/**
	 * @brief Implemented destructor of this state.
	 */
	~ExecuteState(){};

	/**
	 * @brief Function to do an activity
	 */
	/*virtual*/ void doActivity();

	/**
	 * @brief Function to handle an event
	 * @param anEvent the event that triggers the state change
	 * @return true if the event is successfully handled, false if the event is ignored
	 */
	/*virtual*/ bool handleEvent(const Event& anEvent);
};

class StopState: public AbstractRobotArmState
{
public:
	/**
	 * @brief Implemented constructor to set the RobotArmContext.
	 * @param aRobotArmContext
	 */
	explicit StopState(RobotArmContext* aRobotArmContext) : AbstractRobotArmState(aRobotArmContext){}

	/**
	 * @brief Implemented destructor of this state.
	 */
	~StopState(){};

	/**
	 * @brief Function to do an activity
	 */
	/*virtual*/ void doActivity();

	/**
	 * @brief Function to handle an event
	 * @param anEvent the event that triggers the state change
	 * @return true if the event is successfully handled, false if the event is ignored
	 */
	/*virtual*/ bool handleEvent(const Event& anEvent);
};

#endif /* CONCRETESTATES_HPP_ */
