#pragma once
#include "Common.hpp"

namespace VulkanLearn
{
	class Context
	{
	public:
		vk::Instance instance;											//Vulkan instance which is used to store all pre-application state
	};
}
