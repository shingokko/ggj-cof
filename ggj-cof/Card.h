//
//  Card.h
//  ggj-cof
//
//  Created by Sam Christian Lee on 1/26/13.
//  Copyright 2013 Chopsticks On Fire. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "AICharacter.h"
#import "CommonProtocol.h"

@class TileMapManager;

@interface Card : AICharacter {
    int _number;
	CardSuit _cardSuit;
    
    CCAnimation *_walkingAnim;
    CCAnimate *_animationHandle;
    
    GameObject* _suitPanel;
    GameObject* _numberPanel;
    
    FacingDirection _facing;
    
    CGFloat _factor;
    CGFloat _limit;
    CGFloat _momentum;
    
    //spawning & AI
    CGPoint _originPoint;
    int _currentDestinationPath;
    NSMutableArray *_destinationPoints;
    FacingDirection _previousDirection;
    int _frontOrder;
}

@property (nonatomic, assign) CGPoint originPoint;
@property (nonatomic, assign) int currentDestinationPath;
@property (nonatomic, retain) NSMutableArray *destinationPoints;
@property (nonatomic, assign) FacingDirection facing;
@property (nonatomic, assign) FacingDirection previousDirection;
@property (nonatomic, assign) int frontOrder;

-(void)setNumber:(int)number;
-(void)setSuit:(CardSuit)suit;
-(int)getNumber;
-(CardSuit)getSuit;
-(void)face:(FacingDirection)direction;
-(void) startWalking;
-(void) stopWalking;

-(void) updateStateWithTileMapManager:(ccTime)deltaTime andGameObject:(GameObject *)gameObject tileMapManager:(TileMapManager *)tileMapManager;
-(CGRect)chaseRunBoundingBox;
@end