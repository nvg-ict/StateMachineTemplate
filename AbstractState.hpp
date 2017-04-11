/*
 * AbstractState.hpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */

#ifndef ABSTRACTSTATE_HPP_
#define ABSTRACTSTATE_HPP_

#include "AbstractEventHandler.hpp"

/**
 * @brief Forward declaration to Context to prevent circular references.
 */
class Context;

/**
 * @brief This abstract class contains functions and variables
 */
class AbstractState : public AbstractEventHandler
{
public:
	/**
	 * @brief Implemented constructor which calls the AbstractEventHandler and sets the context.
	 * @param aContext	the context which inherits Context.
	 */
	explicit AbstractState(Context* aContext) : AbstractEventHandler(), myContext(aContext){}
	/**
	 * @brief Implemented destructor
	 */
	virtual ~AbstractState(){};

	/**
	 * @brief Pure virtual function specified to define a rule to do an activity.
	 */
	virtual void doActivity() = 0;

	/**
	 * @brief Getter to get the current context.
	 * @return context
	 */
	Context* getContext() {return myContext;}
private:
	/**
	 * @brief This variable contains the current context.
	 */
	Context* myContext;
};

#endif /* ABSTRACTSTATE_HPP_ */

