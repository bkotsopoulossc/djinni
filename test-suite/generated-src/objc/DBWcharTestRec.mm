// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wchar_test.djinni

#import "DBWcharTestRec.h"


@implementation DBWcharTestRec

- (nonnull instancetype)initWithS:(nonnull NSString *)s
{
    if (self = [super init]) {
        _s = [s copy];
    }
    return self;
}

+ (nonnull instancetype)wcharTestRecWithS:(nonnull NSString *)s
{
    return [[self alloc] initWithS:s];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p s:%@>", self.class, (void *)self, self.s];
}

#endif
@end
