//
//  ToDoItem.h
//  ToDoList
//
//  Created by  Santosh Sharanappa Mandi on 1/22/17.
//  Copyright © 2017  Santosh Sharanappa Mandi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
