/*
 * RobotArmContext.hpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#ifndef ROBOTARMCONTEXT_HPP_
#define ROBOTARMCONTEXT_HPP_

#include <vector>
#include <memory>

#include "Context.hpp"
#include "AbstractState.hpp"
#include "States.hpp"


/**
 * @brief Class that contains functions and variables necessary for event queuing, event scheduling and the startup of the statemachine
 */
class RobotArmContext : public Context,  public std::enable_shared_from_this<RobotArmContext>
{
public:
	/**
	 * @brief Constructor
	 * @param aLynx
	 */
	explicit RobotArmContext();
	RobotArmContext(RobotArmContext& aRobotArmContext);
	/**
	 * @brief Destructor
	 */
	virtual ~RobotArmContext();

	/**
	 * @brief Function to schedule an event
	 * @param anEvent
	 */
	void addRobotArmEvent(States::Events event);

	virtual void handleNotification();
private:
};

#endif /* ROBOTARMCONTEXT_HPP_ */
