#include "Renderer.h"

Renderer& Renderer::getInstance()
{
	return instance;
}

Renderer::Renderer()
{

}

Renderer Renderer::instance;
