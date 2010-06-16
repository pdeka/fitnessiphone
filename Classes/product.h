//
//  product.h
//  fitness
//
//  Created by Prabin Deka on 16/06/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

@interface Product : NSObject {
    NSString *type;
    NSString *name;
}

@property (nonatomic, copy) NSString *type, *name;

+ (id)productWithType:(NSString *)type name:(NSString *)name;

@end