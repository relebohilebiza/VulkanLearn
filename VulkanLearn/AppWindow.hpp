#pragma once 

#define GFLW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace VulkanLearn
{
	class AppWindow
	{
	public:
		AppWindow(int width, int height, std::string name);
		~AppWindow();

		AppWindow(const AppWindow&) = delete;
		AppWindow& operator = (const AppWindow&) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); };

	private:
		void initWindow();

		const int m_width;
		const int m_height;

		std::string windowName;
		GLFWwindow* window;
	};
}