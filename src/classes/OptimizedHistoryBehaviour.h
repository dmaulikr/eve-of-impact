//
//  OptimizedHistoryManager.h
//  Eve of Impact
//
//  Created by Rik Schennink on 7/7/10.
//  Copyright 2011 Rik Schennink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HistoryBehaviourBase.h"

@interface OptimizedHistoryBehaviour : HistoryBehaviourBase {
	float minimumCoordinateDistanceSquared;
}

-(id)initWithMaxCoordinates:(uint)maximum andMinimumCoordinateDistanceSquared:(float)distance;

@end
