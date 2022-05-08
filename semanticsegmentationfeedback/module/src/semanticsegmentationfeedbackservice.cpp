// Local Includes
#include "semanticsegmentationfeedbackservice.h"

// External Includes
#include <nap/core.h>
#include <nap/resourcemanager.h>
#include <nap/logger.h>
#include <iostream>

RTTI_BEGIN_CLASS_NO_DEFAULT_CONSTRUCTOR(nap::SemanticSegmentationFeedbackService)
	RTTI_CONSTRUCTOR(nap::ServiceConfiguration*)
RTTI_END_CLASS

namespace nap
{
	bool SemanticSegmentationFeedbackService::init(nap::utility::ErrorState& errorState)
	{
		//Logger::info("Initializing SemanticSegmentationFeedbackService");
		return true;
	}


	void SemanticSegmentationFeedbackService::update(double deltaTime)
	{
	}
	

	void SemanticSegmentationFeedbackService::getDependentServices(std::vector<rtti::TypeInfo>& dependencies)
	{
	}
	

	void SemanticSegmentationFeedbackService::shutdown()
	{
	}
}
