#include "BuilderInterface.h"
#include "Products.h"

class ConcreteBuilder1 : public BuilderInterface
{
	private:
	Product1 *product;

	public:
	ConcreteBuilder1(){
		this->Reset();
	}

	~ConcreteBuilder1(){
        delete product;
    }

    void Reset(){
        this->product= new Product1();
    }

	void ProducePartA() override{
		this->product->getParts().push_back("PartA1");
	}
 
	void ProducePartB() override{
		this->product->getParts().push_back("PartB1");
	}

	void ProducePartC() override{
		this->product->getParts().push_back("PartC1");
	}

	Product1* getProduct1(){
		Product1* result = this->product;
		this->Reset();
		return result;
	}

};