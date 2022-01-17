#pragma once
#include "employe.h"
#include <vector>

	class personnel
	{
	private:
		vector <employe*> vec;



	public:
		personnel();
		void addEmploye(employe* e);
		float sommeSal();
		~personnel();
	};