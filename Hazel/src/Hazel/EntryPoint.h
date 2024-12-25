#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();

	HZ_CORE_WARN("Initialized core Log!");
	HZ_INFO("Intialized client information");

	auto app = Hazel::CreateApplication();

	app->Run();

	delete app;
}

#endif
