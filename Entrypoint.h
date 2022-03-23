#pragma once

#ifdef RE_PLATFORM_WINDOWS

extern RaytechEngine::Application* RaytechEngine::CreateApplication();
int main(int argc, char** argv)
{

	//calls the function in sandboxapp
	
	auto app = RaytechEngine::CreateApplication();
   app->Run();
	
	delete app;



}
#endif 

