//
//  NSObject+MulleGraphviz.h
//  MulleScion
//
//  Created by Nat! on 08.11.13.
//  Copyright (c) 2013 Mulle kybernetiK. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject ( MulleGraphviz)

- (NSString *) mulleDotDescription;

- (NSMutableDictionary *) mulleGraphvizAttributes;
- (NSMutableDictionary *) mulleGraphvizChildrenByName;
- (NSString *) mulleGraphvizDescription;
- (NSString *) mulleGraphvizName;

@end