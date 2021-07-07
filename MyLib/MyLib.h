//
//  MyLib.h
//  MyLib
//
//  Created by Алексей Алексеев on 05.07.2021.
//

#import <Foundation/Foundation.h>
#import "MySubLib.h"

@interface MyLib : NSObject

@property (strong, nonatomic) MySubLib * mySubLib;

@end
