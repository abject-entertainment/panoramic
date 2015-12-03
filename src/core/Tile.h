#pragma once

namespace panoramic
{
	class Skin;
	
	class Tile
	{
	public:
		Tile();

		bool tick(float dT);
		bool render(Skin &skin);
	};
}