//
//  Deck.h
//  Matchismo
//
//  Created by Neo on 7/30/14.
//  Copyright (c) 2014 Paradigm X. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
