#pragma once

// Meyers' singleton
class Singleton 
{
public:
	static Singleton& Instance()
	{
		// static variable is initialized once and
		// stay alive while the programm running
		static Singleton s;	
		return s;
	}

private:

	// constuctur and destructor can't be called
	Singleton() {}
	~Singleton() {}

	// copying is disabled	
	Singleton(Singleton const& s) = delete;
	Singleton& operator = (Singleton const&) = delete;
};