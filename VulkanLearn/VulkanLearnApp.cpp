#include "./VulkanLearnApp.hpp"

namespace VulkanLearn
{
	void VulkanLearnApp::run()
	{
		while (!appWindow.shouldClose())
		{
			glfwPollEvents();
		}
	}
}