#ifndef SPAWNER_H
#define SPAWNER_H

class Spawner
{
public:
	//later on, pass in a set of items because submenu
	Spawner()
	{

	}
	void draw(int x, int y, int h, int w)
	{

	}
private:
	float vertices[9] = {
	-0.5f, -0.5f, 0.0f,
	 0.5f, -0.5f, 0.0f,
	 0.0f,  0.5f, 0.0f
	};
};
#endif