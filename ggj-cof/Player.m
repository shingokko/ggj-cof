//
//  Player.m
//  ggj-cof
//
//  Created by Shingo Tamura on 29/06/13.
//
//

#import "Player.h"
#import "SimpleAudioEngine.h"

@implementation Player

-(void) loadAnimations {
    NSMutableArray *animFrames = [NSMutableArray array];
    [animFrames addObject:[[CCSpriteFrameCache sharedSpriteFrameCache] spriteFrameByName:@"card-1.png"]];
    [animFrames addObject:[[CCSpriteFrameCache sharedSpriteFrameCache] spriteFrameByName:@"card-2.png"]];
    [animFrames addObject:[[CCSpriteFrameCache sharedSpriteFrameCache] spriteFrameByName:@"card-3.png"]];
    [animFrames addObject:[[CCSpriteFrameCache sharedSpriteFrameCache] spriteFrameByName:@"card-4.png"]];
    [animFrames addObject:[[CCSpriteFrameCache sharedSpriteFrameCache] spriteFrameByName:@"card-5.png"]];
    [animFrames addObject:[[CCSpriteFrameCache sharedSpriteFrameCache] spriteFrameByName:@"card-6.png"]];
    
    // set up walking animations
    _walkingAnim = [[CCAnimation animationWithFrames:animFrames delay:0.1f] retain];
}

-(id) init
{
    if((self=[super init])) {
        // Don't delay sprite flipping for player
        _delayFlipX = NO;
        _score = 0;
    }
    return self;
}

-(void)setScore:(int)scorePoint {
    _score = _score + scorePoint;
}

-(int)getScore {
    return _score;
}

@end
