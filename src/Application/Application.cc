#include "Application/Application.h"
#include <assert.h>
#include <iostream>

Adon::Application::Application() : isOpen(false)
{
}

bool Adon::Application::Open()
{
	assert(!this->isOpen);
	this->isOpen = true;
	return true;
}

void Adon::Application::Close()
{
	assert(this->isOpen);
	this->isOpen = false;
}

void Adon::Application::Run()
{
	///Implement run code
}

void Adon::Application::Exit()
{
	///Implement exit code
}

bool Adon::Application::IsOpen() const
{
	return this->isOpen;
}
