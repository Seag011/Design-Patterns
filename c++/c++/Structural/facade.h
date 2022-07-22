#pragma once
#include <iostream>

namespace Facede {
	
	class Facade {
	public:
		Facade() {
			a = &ComponentA();
			b = &ComponentB();
			c = &ComponentC();
		}
		void HelloWorld() {
			a->DoA();
			b->DoB();
			c->DoC();
		}
	private:
		ComponentA* a;
		ComponentB* b;
		ComponentC* c;
	};

	/* components of subsystem */ 
	class ComponentA{
	public:
		void DoA() {
			std::cout << "Hello";
		}
	};

	class ComponentB {
	public:
		void DoB() {
			std::cout << " wo";
		}
	};

	class ComponentC {
	public:
		void DoC() {
			std::cout << "rld!" << std::endl;
		}
	};
	/*------------------------*/
}