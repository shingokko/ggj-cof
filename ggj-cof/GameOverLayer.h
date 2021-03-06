//
//  GameOverScene.h
//  TileGame
//
//  Created by Shingo Tamura on 12/07/12.
//  Copyright (c) 2013 Groovy Vision. All rights reserved.
//

#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor
@end

@interface GameOverScene : CCScene {
    GameOverLayer *layer;
}
@property (nonatomic, retain) GameOverLayer *layer;
@end