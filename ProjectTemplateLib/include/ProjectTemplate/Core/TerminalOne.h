#pragma once

#include <ProjectTemplate/Core/TerminalRegion.h>
#include <ProjectTemplate/Utils/DllUtils.h>

#include <ProjectTemplate/Utils/GestureBindUtils.h>

namespace PT
{
	class libProjectTemplate TerminalOne : public TerminalRegion
	{
	public:
		TerminalOne(std::shared_ptr<Ship> ship);
		TerminalOne(const TerminalOne&) = delete;
		TerminalOne& operator=(const TerminalOne&) = delete;

		void update(sf::Int64 elapsedTime) override;

		// Function to Bind to Interact with the Sprinklers
		void TurnOnSprinklers();


	private:
		bool m_isInitialized;

	};
}