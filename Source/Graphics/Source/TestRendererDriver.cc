#include "TestRendererDriver.h"
#include <iostream>

using namespace Adon;
using namespace Adon::Graphics;

void Adon::Graphics::TestRendererDriver::setViewportSize(int width, int height)
{
	std::cout << "hej jag settar vyport stuff >D";
}

void Adon::Graphics::TestRendererDriver::prepare()
{
	std::cout << "hej jag preparerar >D";
}

void Adon::Graphics::TestRendererDriver::addSprite(SpriteDescriptor& s)
{
	std::cout << "hej jag addar sprit! >D";
}

void Adon::Graphics::TestRendererDriver::render()
{
	std::cout << "hej jag renderar!! >D";
}

Adon::Graphics::TestRendererDriver::TestRendererDriver()
{

}

TestRendererDriver& Adon::Graphics::TestRendererDriver::getInstance()
{
	return instance;
}

TestRendererDriver Adon::Graphics::TestRendererDriver::instance;
