#include "Graphics.h"


void Adon::Graphics::SetDriver(Adon::GraphicsDriver& gfxdriver)
{
	this->gfxdriver = &gfxdriver;
}

void Adon::Graphics::AddSprites(Sprite sprites[],unsigned int size)
{
	gfxdriver->AddSprites(sprites,size);
}

void Adon::Graphics::AddSprites(std::vector<Sprite>& sprites)
{
	gfxdriver->AddSprites(sprites);
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
