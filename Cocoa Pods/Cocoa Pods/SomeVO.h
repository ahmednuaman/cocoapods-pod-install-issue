//
//  SomeVO.h
//  Cocoa Pods
//
//  Created by Ahmed Nuaman on 29/01/2014.
//  Copyright (c) 2014 FireStarter Media Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SomeVO : NSObject

@property(nonatomic, retain) NSString *aProp;

-(RACSignal *)modelIsValidSignal;

@end
