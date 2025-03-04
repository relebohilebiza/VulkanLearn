#include "./AppWindow.hpp"

namespace VulkanLearn
{
	AppWindow::AppWindow(int width, int height, std::string name)
		: m_width(width)
		, m_height(height)
		, windowName(name)
	{
		initWindow();
	}

	AppWindow::~AppWindow()
	{
		// distroy the resources you required at initialization
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void AppWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);				// GLFW not to create openGL context
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);					// GLFW not to resize the window after it is created

		window = glfwCreateWindow(m_width, m_height, windowName.c_str(), nullptr, nullptr);			// Initialize the window ptr
	}
}