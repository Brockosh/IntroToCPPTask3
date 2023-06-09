#pragma once
class Country
{
public: 
	float tipRate;
	float virtual priceIncludingTip(float price) 
	{
		float totalPrice = price * price * tipRate;
		return totalPrice;
	}
};

class France : Country 
{
public:
	float tipRate = .12;
	float priceIncludingTip(float price) override 
	{
		float totalPrice = price + price * tipRate;
		return totalPrice;
	}
};

class Serbia : Country
{
public:
	float tipRate = .12;
	float priceIncludingTip(float price) override 
	{
		float totalPrice = price + price * tipRate;
		return totalPrice;
	}
};

class Germany : Country
{
public:
	float tipRate = .12;
	float priceIncludingTip(float price) override 
	{
		float totalPrice = price + price * tipRate;
		return totalPrice;
	}
};

