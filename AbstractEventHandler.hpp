/*
 * AbstractEventHandler.hpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#ifndef ABSTRACTEVENTHANDLER_HPP_
#define ABSTRACTEVENTHANDLER_HPP_

#include "Event.hpp"

/**
 * @brief This interface contains functions to handle an event.
 */
class AbstractEventHandler
{
public:
	/**
	 * @brief Implemented constructor of this interface.
	 */
	AbstractEventHandler(){};

	/**
	 * @brief Implemented destructor of this interface.
	 */
	virtual ~AbstractEventHandler(){};

	/**
	 * @brief Pure virtual function specified to define a rule about how to handle an event.
	 *
	 * @param anEvent	a const reference to an event
	 *
	 * @return true if the event is successfully handled, false if the event is ignored
	 */
	virtual bool handleEvent(const Event& anEvent)=0;
};

#endif /* ABSTRACTEVENTHANDLER_HPP_ */


