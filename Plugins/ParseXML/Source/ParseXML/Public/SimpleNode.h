#pragma once
#include <vector>

class SimpleNode
{
	friend class UfileParser;
public: 
	SimpleNode();
	~SimpleNode();

	//Access Functions
	void SetPosition(const TCHAR*, const TCHAR*);
	void SetID(const TCHAR*);

	/* To be defined ...
	EdgeContainer* fetchApproachingEdges(EdgeContainer*);
	EdgeContainer* fetchOutgoingEdges(EdgeContainer*);
	*/

	

private:
	FVector NodePosition;

	std::vector<float> nodeShapecoordinates;

	/*
	EdgeContainer IncomingEdges;
	EdgeContainer OutgoingEdges;
	*/

	FString ID;
};
