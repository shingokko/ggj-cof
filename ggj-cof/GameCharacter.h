//
//  GameCharacter.h
//  TileGame
//
//  Created by Sam Christian Lee on 9/22/12.
//  Copyright 2013 Groovy Vision. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GameObject.h"

@interface GameCharacter : GameObject {
	int characterHealth;
	CharacterStates characterState;
    CGFloat _speed;
    BOOL _isMoving;
}

@property (readwrite) int characterHealth;
@property (readwrite) CharacterStates characterState;
@property (nonatomic, assign) CGFloat speed;
@property (nonatomic, assign) BOOL isMoving;


@end
