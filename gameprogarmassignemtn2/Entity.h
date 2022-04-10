#pragma once
#include <string>
using namespace std;


class Entity
{
protected:
	string m_name, m_description;
	string m_color;
	string m_verb;
	
	bool m_inventory;

public:
	virtual void examine();
	virtual void open() ;
	virtual void close();
	virtual void enter();
	virtual void push() ;
	virtual void take() ;
	virtual void use() ;


	virtual void unlock() ;
	virtual void lock() ;

	Entity(string name, string description, string color) : m_name(name), m_description(description), m_color(color) {}


};

