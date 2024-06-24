#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"
#include "Director.h"
#include "Products.h"
#include "BuilderInterface.h"

void ClientCode(Director& director) {
	ConcreteBuilder1* builder = new ConcreteBuilder1();
	director.set_builder(builder);
    std::cout << "Standard basic product:\n"; 
    director.BuildMinimalViableProduct();
    
    Product1* p= builder->getProduct1();
    p->ListParts();
    delete p;

    std::cout << "Standard full featured product:\n"; 
    director.BuildFullFeaturedProduct();

    p= builder->getProduct1();
    p->ListParts();
    delete p;

    // Remember, the Builder pattern can be used without a Director class.
    std::cout << "Custom product:\n";
    builder->ProducePartA();
    builder->ProducePartC();
    p=builder->getProduct1();
    p->ListParts();
    delete p;

    delete builder;

	std::cout << "\nConcrete Builder 2:\n"; 

	ConcreteBuilder2* builder2 = new ConcreteBuilder2();
	director.set_builder(builder2);
    std::cout << "Standard basic product:\n"; 
    director.BuildMinimalViableProduct();
    
    Product1 p2= builder2->getProduct1();
    p2.ListParts();

    std::cout << "Standard full featured product:\n"; 
    director.BuildFullFeaturedProduct();

    p2= builder2->getProduct1();
    p2.ListParts();


    // Remember, the Builder pattern can be used without a Director class.
    std::cout << "Custom product:\n";
    builder2->ProducePartA();
    builder2->ProducePartC();
    p2=builder2->getProduct1();
    p2.ListParts();

    delete builder2;

}

int main(){
	Director* director= new Director();
    ClientCode(*director);
    delete director;
    return 0;  
}