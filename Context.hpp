/*
 * Context.hpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#ifndef CONTEXT_HPP_
#define CONTEXT_HPP_

#include "AbstractState.hpp"
#include <memory>

/**
 * @brief This class contains functions to change the current state
 */
class Context
{
public:
	/**
	 * @brief Constructor
	 */
	Context();

	/**
	 * @brief Typedef to make the type shorter and more readable
	 */
	typedef std::shared_ptr<AbstractState> State_SPTR;

	/**
	 * @brief Destructor
	 */
	virtual ~Context();

	/**
	 * @brief Function to set the current state
	 * @param aState	the state to change to
	 */
	void setCurrentState(State_SPTR aState);
protected:
	/**
	 * @brief Shared pointer that points to the current state
	 */
	std::shared_ptr<AbstractState> currentState;
};


#endif /* CONTEXT_HPP_ */
