/*
 * Event.cpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#include "Event.hpp"

Event::Event(unsigned long anId)
:id(anId)
{
}

Event::~Event()
{
}

Event::Event(const Event& anEvent)
:id(anEvent.id)
{
}

Event& Event::operator =(const Event& anEvent)
{
	if (this != &anEvent)
	{
		id = anEvent.id;
	}
	return *this;
}

unsigned long Event::getID() const
{
	return id;
}

