#pragma once

class BuilderInterface{
	public:
	virtual ~BuilderInterface(){}
	virtual void ProducePartA() = 0;
	virtual void ProducePartB() = 0;
	virtual void ProducePartC() = 0;
};