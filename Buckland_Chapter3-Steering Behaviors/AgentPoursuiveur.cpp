#include "AgentPoursuiveur.h"
#include "SteeringBehaviors.h"

AgentPoursuiveur::AgentPoursuiveur(GameWorld* world,
	Vector2D position,
	double    rotation,
	Vector2D velocity,
	double    mass,
	double    max_force,
	double    max_speed,
	double    max_turn_rate,
	double    scale,
	Vehicle* agent_leader) : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale)
{
	this->m_leader = agent_leader;


}



AgentPoursuiveur::~AgentPoursuiveur(){}

Vehicle* AgentPoursuiveur::GetAgentLeader() {
	return m_leader;
}