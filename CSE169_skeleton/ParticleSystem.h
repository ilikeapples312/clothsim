#pragma once
#include "Particle.h"
#include "../vector3.h"
#include <vector> 
#include "SpringDamper.h"
#include "Triangle.h"
class ParticleSystem
{
public:
	ParticleSystem();
	ParticleSystem(int numparticles);
	int numParticles = 20;
	std::vector<Particle*> particles; 
	Particle* clothParticles[20][20]; 
	std::vector<SpringDamper*> springDampers; 
	std::vector<Triangle*> triangles;
	void update(float deltaTime, Vector3& wind); 
	void move(Vector3 pos);
	void manipulate(Matrix34 matrix);
	void draw(); 
	void reset(); 
	~ParticleSystem();
};

