// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proto.djinni

#import "proto/objc/test.pbobjc.h"
#import <Foundation/Foundation.h>

@interface DBRecordWithEmbeddedProto : NSObject
- (nonnull instancetype)initWithPerson:(nonnull DJTestPerson *)person;
+ (nonnull instancetype)RecordWithEmbeddedProtoWithPerson:(nonnull DJTestPerson *)person;

@property (nonatomic, readonly, nonnull) DJTestPerson * person;

@end
