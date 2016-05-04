//********************************** Banshee Engine (www.banshee3d.com) **************************************************//
//**************** Copyright (c) 2016 Marko Pintera (marko.pintera@gmail.com). All rights reserved. **********************//
#pragma once

#include "BsPrerequisites.h"

namespace BansheeEngine
{
	/** @cond INTERNAL */
	/** @addtogroup GUI
	 *  @{
	 */

	/**	Type of valid command events. */
	enum class GUICommandEventType
	{
		Redraw, FocusLost, FocusGained, MoveLeft, MoveRight, MoveUp, MoveDown, 
		SelectLeft, SelectRight, SelectUp, SelectDown, Escape, Delete, Backspace, Return, Confirm
	};

	/**
	 * Holds data about a GUI command event. Command events are special events with a more specific purpose than general
	 * input events.
	 */
	class BS_EXPORT GUICommandEvent
	{
	public:
		GUICommandEvent()
			:mType(GUICommandEventType::Redraw)
		{ }

		/**	Returns type describing what kind of event this is. */
		GUICommandEventType getType() const { return mType; }
	private:
		friend class GUIManager;

		/**	Sets type describing what kind of event this is. */
		void setType(GUICommandEventType type) { mType = type; }

		GUICommandEventType mType;
	};

	/** @} */
	/** @endcond */
}