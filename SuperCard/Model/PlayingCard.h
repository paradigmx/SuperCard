//
//  PlayingCard.h
//  Matchismo
//
//  Created by Neo on 7/30/14.
//  Copyright (c) 2014 Paradigm X. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
