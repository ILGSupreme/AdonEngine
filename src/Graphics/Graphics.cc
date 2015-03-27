#include "Graphics.h"


void Adon::Graphics::SetDriver(Adon::GraphicsDriver& gfxdriver)
{
	this->gfxdriver = &gfxdriver;
}

void Adon::Graphics::AddSprites()
{
	gfxdriver->AddSprites();
}

void Adon::Graphics::Draw()
{
	gfxdriver->Draw();
}

Adon::Graphics& Adon::Graphics::GetInstance()
{
	static Graphics instance;
	return instance;
}
