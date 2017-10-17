#include "POffer.h"


POffer::POffer()
{
}


POffer::~POffer()
{
}

void POffer::applyDiscount() {
	price = price*0.5;
}

void POffer::setPromotionDescription(string Description) {
	descriptionPromotion = Description;
}


void POffer::setDaysRemaining(int Days) {
	daysRemaining = Days;
}
