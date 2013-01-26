//
//  CardManager.h
//  ggj-cof
//
//  Created by Sam Christian Lee on 1/25/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#import "cocos2d.h"
@class GamePlayRenderingLayer;
@class GameObject;
@class TileMapManager;

@interface CardManager : NSObject {
    CCSpriteBatchNode *_cardDeckSpriteBatchNode;
}

@property (nonatomic, retain) CCSpriteBatchNode *cardDeckSpriteBatchNode;

-(id) initCardsFromTileMap:(CCTMXTiledMap*)tileMap;
-(void) addCard:(CGPoint)spawnLocationInPixels withZValue:(int)zValue;

@end
