/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIImageView : UIImageView {
    SFImage * _currentImage;
    unsigned int  _style;
}

@property (retain) SFImage *currentImage;
@property unsigned int style;

+ (id)imageViewWithImage:(id)arg1 style:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)currentImage;
- (id)initWithStyle:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setCurrentImage:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)style;
- (void)updateWithImage:(id)arg1;
- (void)updateWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateWithLoadedImage:(id)arg1 forImage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateWithUIImage:(id)arg1 isTemplate:(BOOL)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end
