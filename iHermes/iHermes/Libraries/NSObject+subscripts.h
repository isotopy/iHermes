//
//  NSObject_subscripts.h
//  iHermes
//
//  Created by Susan Ditmore on 8/30/12.
//
//

#import <Foundation/Foundation.h>


#ifndef __has_feature
#define __has_feature(x) 0
#endif

#if __has_feature(objc_bool)
#undef YES
#undef NO

#define YES             __objc_yes
#define NO              __objc_no
#endif


#if __IPHONE_OS_VERSION_MAX_ALLOWED < 60000
@interface NSDictionary(subscripts)
- (id)objectForKeyedSubscript:(id)key;
@end

@interface NSMutableDictionary(subscripts)
- (void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;
@end

@interface NSArray(subscripts)
- (id)objectAtIndexedSubscript:(NSUInteger)idx;
@end

@interface NSMutableArray(subscripts)
- (void)setObject:(id)obj atIndexedSubscript:(NSUInteger)idx;
@end
#endif