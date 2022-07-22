#pragma once
#include <iostream>

namespace FactoryMethod {
	
	class IProduct {
	public:
		virtual void SomeMethod() {};
	};

	class ICreator {
	public:
		virtual IProduct FactoryMethod() = 0;
	};

	class ProductA : public IProduct {
	public:
		void SomeMethod() override{
			std::cout << "A product" << std::endl;
		}
	};

	class ProductB : public IProduct {
	public:
		void SomeMethod() override {
			std::cout << "B product" << std::endl;
		}
	};
	
	class CreatorA : public ICreator {
	public:
		IProduct FactoryMethod() override{
			return ProductA();
		}
	};

	class CreatorB : public ICreator {
	public:
		IProduct FactoryMethod() override {
			return ProductB();
		}
	};
}