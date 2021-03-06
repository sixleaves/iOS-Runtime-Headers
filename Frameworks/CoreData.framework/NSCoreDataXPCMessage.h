/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding> {
    NSData * _messageBody;
    unsigned int  _messageCode;
    NSString * _token;
}

@property (retain) NSData *messageBody;
@property unsigned int messageCode;
@property (retain) NSString *token;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageBody;
- (unsigned int)messageCode;
- (void)setMessageBody:(id)arg1;
- (void)setMessageCode:(unsigned int)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
