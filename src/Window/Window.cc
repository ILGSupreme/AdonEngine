#include "Window.h"

void Adon::Window::SetDriver(Adon::WindowDriver& d)
{
	driver = &d;
}

void Adon::Window::Open()
{
	driver->Open();
}

void Adon::Window::Update()
{
	driver->Update();
}

bool Adon::Window::IsRunning()
{
	return driver->IsRunning();
}

Adon::Window& Adon::Window::GetInstance()
{
	static Window instance;
	return instance;
}
