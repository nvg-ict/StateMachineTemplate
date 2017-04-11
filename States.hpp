/*
 * States.hpp
 *
 *  Created on: Mar 4, 2017
 *      Author: nico
 */


#ifndef STATES_HPP_
#define STATES_HPP_

/**
 * @brief States for the statemachine
 */
namespace States
{
		enum Events
		{
			evInitReady,
			evTask,
			evTaskDone,
			evSTOP,
			evSTOPdisable
		};
}

#endif /* STATES_HPP_ */

