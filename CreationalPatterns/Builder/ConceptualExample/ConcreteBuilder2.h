#include "BuilderInterface.h"
#include "Products.h"

class ConcreteBuilder2 : public BuilderInterface
{
	private:
	Product1 product;

	public:
	ConcreteBuilder2(){
		this->Reset();
	}

	~ConcreteBuilder2(){

    }

    void Reset(){
        this->product.getParts().clear();
    }

	void ProducePartA() override{
		this->product.getParts().push_back("PartA2");
	}
 
	void ProducePartB() override{
		this->product.getParts().push_back("PartB2");
	}

	void ProducePartC() override{
		this->product.getParts().push_back("PartC2");
	}

	Product1 getProduct1(){
		Product1 result = this->product;
		this->Reset();
		return result;
	}

};