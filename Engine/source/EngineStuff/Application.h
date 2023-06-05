#pragma once
#include "core.h"

namespace Engine
{
	class _declspec(dllexport)Application;
	class Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();


		// To be defined by client
	};
	
	Application* CreateApplication();
}

