//
//  Card.h
//  Matchismo
//
//  Created by Neo on 7/28/14.
//  Copyright (c) 2014 Paradigm X. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;
@end
