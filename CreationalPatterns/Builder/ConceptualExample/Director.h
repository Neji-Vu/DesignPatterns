#include "BuilderInterface.h"

class Director{
	private:
	BuilderInterface* builder;

	public:
	void set_builder(BuilderInterface* builder){
		this->builder = builder;
	}

	void BuildMinimalViableProduct(void){
		this->builder->ProducePartA();
	}

	void BuildFullFeaturedProduct(void){
		this->builder->ProducePartA();
		this->builder->ProducePartB();
		this->builder->ProducePartC();
	}
};