#pragma once
namespace Prototype {
	// base class 
	class Base
	{
	public:
		virtual void foo() {};
		virtual Base Clone() {};
	};

	// concrete prototype that is used
	class Prototype : Base {
	public:
		Base Clone() {
			return static_cast<Base>(*this);
		}
	};
}