#pragma once
#include "employe.h"
#include <iostream>

	class commercial :
		public employe
	{
	private:
		float venteMois;
	public:
		commercial(string nom, float indice, float vm);
		void miseajour(float V);
		float calculerSal() const override;
		~commercial();
	};