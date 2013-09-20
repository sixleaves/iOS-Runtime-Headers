/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class NSDictionary;

@interface CIPDF417BarcodeGenerator : CICodeGenerator {
    NSDictionary *inputOptions;
}

@property(copy) NSDictionary * inputOptions;

+ (id)customAttributes;

- (id)inputOptions;
- (struct CGImage { }*)outputCGImage;
- (void)setDefaults;
- (void)setInputOptions:(id)arg1;

@end