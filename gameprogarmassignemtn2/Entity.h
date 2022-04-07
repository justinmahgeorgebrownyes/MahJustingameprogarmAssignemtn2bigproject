#pragma once
#include <string>
using namespace std;


class Entity
{
private:
	string m_name, m_description;
	string m_color;

public:
	virtual void examine();
	virtual void open() ;
	virtual void close();
	virtual void enter();
	virtual void push() ;
	virtual void take() ;
	virtual void use() ;

	Entity(string name, string description, string color) : m_name(name), m_description(description), m_color(color) {}


};

