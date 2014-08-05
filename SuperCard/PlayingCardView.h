//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Neo on 8/5/14.
//  Copyright (c) 2014 Paradigm X. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;
@end
