//
//  product.m
//  fitness
//
//  Created by Prabin Deka on 16/06/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//
#import "Product.h"

@implementation Product

@synthesize type, name;


+ (id)productWithType:(NSString *)type name:(NSString *)name
{
    Product *newProduct = [[[self alloc] init] autorelease];
    newProduct.type = type;
    newProduct.name = name;
    return newProduct;
}


- (void)dealloc
{
    [type release];
    [name release];
    [super dealloc];
}

@end