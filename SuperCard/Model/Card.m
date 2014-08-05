//
//  Card.m
//  Matchismo
//
//  Created by Neo on 7/28/14.
//  Copyright (c) 2014 Paradigm X. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards {
    int score = 0;

    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }

    return score;
}

@end
