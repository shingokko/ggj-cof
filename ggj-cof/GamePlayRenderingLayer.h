//
//  GameRenderingLayer.h
//  ggj-cof
//
//  Created by Shingo Tamura on 24/01/13.
//
//

#import "cocos2d.h"
#import "CommonProtocol.h"

@class GamePlayInputLayer;
@class GamePlayStatusLayer;
@class Human;
@class TileMapManager;

@interface GamePlayRenderingLayer: CCLayerColor
{
    CCSpriteBatchNode *_sceneBatchNode;
    Human *_player;
    TileMapManager* _mapManager;
    
    GamePlayInputLayer *_inputLayer;
    GamePlayStatusLayer *_statusLayer;
}

@property (nonatomic, retain) GamePlayInputLayer *inputLayer;
@property (nonatomic, retain) GamePlayStatusLayer *statusLayer;
@property (nonatomic, retain) TileMapManager *mapManager;
@property (nonatomic, retain) Human *player;
@property (nonatomic, retain) CCSpriteBatchNode *sceneBatchNode;

-(void) postMovePlayer:(CGPoint)destination facing:(FacingDirection)direction;
-(void) movePlayer:(CGPoint)destination facing:(FacingDirection)direction;

@end
