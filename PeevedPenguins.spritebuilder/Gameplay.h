//
//  Gameplay.h
//  PeevedPenguins
//
//  Created by Rodrigo Gloria on 7/1/14.
//  Copyright 2014 Apportable. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Gameplay : CCNode {
    CCPhysicsNode *_physicsNode;
    CCNode *_catapultArm;
    CCNode *_levelNode;
    CCNode *_contentNode;
    CCNode *_pullbackNode;
}

@end
