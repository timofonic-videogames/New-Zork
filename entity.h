#ifndef _ENTITY_
#define _ENTITY_

#include "dlist.h"
#include "string.h"

enum Shape{ ROOM = 0, EXIT, CREATURE, ITEM, NPCS, PLAYER };

class Entity
{
public:
	String name;
	String description;
	Shape shape;

	Dlist <Entity*> list;
	
	Entity();
	Entity(const char* name, const char* description, const Shape shape);
	virtual void Look(){};
	virtual void Update(){};
	~Entity();
};


#endif