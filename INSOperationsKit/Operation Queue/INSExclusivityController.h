//
//  INSExclusivityController.h
//  INSOperationsKit Demo
//
//  Created by Michal Zaborowski on 03.09.2015.
//  Copyright (c) 2015 Michal Zaborowski. All rights reserved.
//

#import <Foundation/Foundation.h>

@class INSOperation;

/**
 `ExclusivityController` is a singleton to keep track of all the in-flight
 `Operation` instances that have declared themselves as requiring mutual exclusivity.
 We use a singleton because mutual exclusivity must be enforced across the entire
 app, regardless of the `OperationQueue` on which an `Operation` was executed.
 */

@interface INSExclusivityController : NSObject
+ (instancetype)sharedInstance;

- (void)addOperation:(INSOperation *)operation categories:(NSArray * /*[String]*/)categories;
- (void)removeOperation:(INSOperation *)operation categories:(NSArray * /*[String]*/)categories;
@end