#include <RaytechEngine.h>

class Sandbox : public RaytechEngine::Application
{
public :
	Sandbox()
	{

	}
	~Sandbox()
	{

    }


};

RaytechEngine::Application*RaytechEngine:: CreateApplication()
{
	return new Sandbox();
}


