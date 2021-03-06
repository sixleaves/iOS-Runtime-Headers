/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplication : NSObject <NSCopying, NSSecureCoding> {
    int  _family;
}

@property (nonatomic, readonly) int family;

+ (id)complicationWithFamily:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)family;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
