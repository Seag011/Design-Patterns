#pragma once
#include <map>

// id(map key) of each multiton instance could use any other type
// to get access to particular instance
using map = std::map<size_t, Multiton>;

class Multiton {
public:
	
	// get instance of
	static Multiton Instance(size_t n) {

		static map instances;
		if (instances.find(n) == instances.end())
			instances[n] = Multiton(n);

		return instances[n];
	}

	int get_id() {
		return id;
	}

private:

	// some data
	int id;

	// creating is possible only througth Instance
	Multiton() = delete;
	Multiton(const int& id) {
		this->id = id;
	}
	
	// destructor also disabled outside the class
	~Multiton() {};

	// copying is disabled	
	Multiton(Multiton const& s) = delete;
	Multiton& operator = (Multiton const&) = delete;
};