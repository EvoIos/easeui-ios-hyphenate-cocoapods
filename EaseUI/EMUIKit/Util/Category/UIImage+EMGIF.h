//
//  UIImage+GIF.h
//  LBGIFImage
//
//  Created by Laurin Brandner on 06.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (EMGIF)

+ (UIImage *)emsd_animatedGIFNamed:(NSString *)name;

+ (UIImage *)emsd_animatedGIFWithData:(NSData *)data;

- (UIImage *)emsd_animatedImageByScalingAndCroppingToSize:(CGSize)size;

@end
