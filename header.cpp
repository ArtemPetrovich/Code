#include "Header.h"

timestamp::timestamp(byte Hours, byte Minutes, byte Seconds)
{

	h = Hours;
	m = Minutes;
	s = Seconds;
}

timestamp& timestamp::Add_Hours(byte h_add)
{
	h = h + h_add;
	h = h % 24;

	return *this;
}

timestamp& timestamp::Add_Minutes(byte m_add)
{
	m = m + m_add;
	h = h + m / 60;
	m = m % 60;
	h = h % 24;

	return *this;
}

timestamp& timestamp::Add_Seconds(byte s_add)
{
	s = s + s_add;
	m = m + s / 60;
	s = s % 60;
	h = h + m / 60;
	m = m % 60;
	h = h % 24;

	return *this;
}

ostream& operator<<(ostream& o, timestamp ts)
{
	o << ts.h << ":" << ts.m << ":" << ts.s;
	return o;
}
