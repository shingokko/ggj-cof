/*
 *  CommonProtocol.h
 *  TileGame
 *
 *  Created by Sam Christian Lee on 9/22/12.
 *  Copyright 2013 Groovy Vision. All rights reserved.
 *
 */

typedef enum {
    kFacingDown,
    kFacingUp,
    kFacingLeft,
    kFacingRight,
    kFacingNone,
} FacingDirection;

typedef enum {
    CardAnimationWalking,
    CardAnimationRunning,
    CardAnimationNone
    
} CardAnimationType;

typedef enum {
    kStateSpawning,
    kStateIdle,
    kStateCrouching,
    kStateStandingUp,
    kStateWalking,
    kStateAttacking,
    kStateJumping,
    kStateBreathing,
    kStateTakingDamage,
    kStateDead,
    kStateTraveling,
    kStateRotating, 
    kStateDrilling,
    kStateAfterJumping,
    kStateCarryingGold,
	kStateChasing,
    kStateLanding,
    kStateDying,
    kStateRunningAway
} CharacterStates;

typedef enum {
    kStateStatic,
    kStatePressed,
    kStateReleased,
} ButtonStates;

typedef enum {
    kStateEmpy,
    kStateFilled,
} ContainerStates;

typedef enum {
	kObjectTypeNone,
	kHeroType,
    kEnemyTypeZombie,
    kObjectTypeGoldCart,
    kObjectTypeGold,
    kObjectTypeEnemy,
    kObjectTypePlayer
} GameObjectType;

typedef enum {
    kCardSuitSpades,
    kCardSuitClover,
    kCardSuitDiamond,
    kCardSuitHeart
} CardSuit;

typedef enum {
    kStateAwaitingInput,
    kStateSwipedDown,
    kStateSwipedUp,
    kStateSwipedLeft,
    kStateSwipedRight
} InputStates;

@protocol GameplayLayerDelegate

-(void)createObjectOfType:(GameObjectType)objectType withHealth:(int)initialHealth atLocation:(CGPoint)spawnLocationInPixels withZValue:(int)ZValue;

@end