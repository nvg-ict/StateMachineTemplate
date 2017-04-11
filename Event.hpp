/*
 * Event.hpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#ifndef EVENT_HPP_
#define EVENT_HPP_

/**
 * @brief This class contains functions to change the current state
 */
class Event
{
public:
	/**
	 * @brief Constructor
	 * @param anId	id of this event
	 */
	explicit Event(unsigned long anId);

	/**
	 * @brief Copy constructor
	 * @param anEvent
	 */
	Event(const Event& anEvent);

	/**
	 * @brief Copy assignment operator
	 * @param anEvent
	 * @return an event
	 */
	Event& operator=(const Event& anEvent);

	/**
	 * @brief Destructor
	 */
	virtual ~Event();

	/**
	 * @brief Function to get the event id
	 */
	unsigned long getID() const;
private:

	/**
	 * @brief Variable that holds the id of this event.
	 */
	unsigned long id;
};

#endif /* EVENT_HPP_ */
