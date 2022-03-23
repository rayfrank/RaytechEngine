#pragma once
#include "core.h"
namespace RaytechEngine
{
	class RAYTECHENGINE_API Application
	{

	public:
		Application();
	virtual	~Application();

		void Run();
		

	};
	// to be defined in client
	Application* CreateApplication();
	

}