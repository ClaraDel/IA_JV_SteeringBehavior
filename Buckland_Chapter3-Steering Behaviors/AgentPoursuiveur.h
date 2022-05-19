#pragma once
#include "Vehicle.h"
class AgentPoursuiveur : public Vehicle
{
protected :

	bool controlKey = false;
	//Vector2D getVehicleAcceleration();

	Vector2D m_offset;
	Vehicle* m_leader;
	Vehicle* m_target;

public :
	AgentPoursuiveur(GameWorld* world,
			Vector2D position,
			double    rotation,
			Vector2D velocity,
			double    mass,
			double    max_force,
			double    max_speed,
			double    max_turn_rate,
			double    scale,
			Vehicle* agent_leade);

	~AgentPoursuiveur();

};

