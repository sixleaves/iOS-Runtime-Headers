/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;



@interface OADOle : NSObject 
{
    BOOL mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    NSUInteger mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (BOOL)isProgIDSupported:(id)arg1;
+ (BOOL)isCLSIDSupported:(id)arg1;

- (BOOL)iconic;
- (void)setIconic:(BOOL)arg1;
- (id)CLSID;
- (void)setCLSID:(id)arg1;
- (id)ansiUserType;
- (void)setAnsiUserType:(id)arg1;
- (id)ansiClipboardFormatName;
- (void)setAnsiClipboardFormatName:(id)arg1;
- (unsigned long)winClipboardFormat;
- (void)setWinClipboardFormat:(unsigned long)arg1;
- (id)macClipboardFormat;
- (void)setMacClipboardFormat:(id)arg1;
- (id)ansiProgID;
- (void)setAnsiProgID:(id)arg1;
- (id)unicodeUserType;
- (void)setUnicodeUserType:(id)arg1;
- (id)unicodeClipboardFormatName;
- (void)setUnicodeClipboardFormatName:(id)arg1;
- (id)unicodeProgID;
- (void)setUnicodeProgID:(id)arg1;
- (void)setObject:(id)arg1;
- (id)object;
- (id)init;
- (void)dealloc;

@end