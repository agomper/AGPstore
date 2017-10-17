#pragma once
#include "Product.h"

class POffer :
	public Product
{
private:
	string descriptionPromotion;
	int daysRemaining;
public:
	POffer();
	~POffer();
	void applyDiscount();
	void setPromotionDescription(string Description);
	void setDaysRemaining(int Days);
};

