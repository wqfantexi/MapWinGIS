#pragma once

class GlobalClassFactory
{
public:	
	IClassFactory* pointFactory;
	IClassFactory* shapeFactory;
	IClassFactory* extentsFactory;

	GlobalClassFactory::GlobalClassFactory()
	{
		pointFactory = shapeFactory = extentsFactory =  NULL;
	}

	~GlobalClassFactory()
	{
		if (pointFactory)
			pointFactory->Release(); 
		if (shapeFactory)
			shapeFactory->Release();
		if (extentsFactory)
			extentsFactory->Release();
	}
};