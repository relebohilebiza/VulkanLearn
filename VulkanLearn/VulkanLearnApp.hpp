#pragma once 

#include "AppWindow.hpp"

namespace VulkanLearn
{
	class VulkanLearnApp
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		AppWindow appWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
	};
	
}