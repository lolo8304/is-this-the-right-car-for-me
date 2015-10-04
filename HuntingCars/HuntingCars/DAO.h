//
//  DAO.h
//  HuntingCars
//
//  Created by Cédric Wider on 03/10/15.
//  Copyright © 2015 hackZurich. All rights reserved.
//

#ifndef DAO_h
#define DAO_h
@interface DAO : NSObject
-(id) initWithDictionary: (NSDictionary*) dict;
-(NSDictionary*) dictionay;

- (NSString*) s: (NSString*) key;
- (NSString*) i: (NSString*) key;
- (NSArray*) a: (NSString*) key;
- (NSString*) s1: (NSString*) string1 and: (NSString*) by s2: (NSString*) string2;

@end

#endif /* DAO_h */
