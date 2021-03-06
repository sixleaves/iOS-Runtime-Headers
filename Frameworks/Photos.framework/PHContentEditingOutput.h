/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {
    PHAdjustmentData * _adjustmentData;
    int  _baseVersion;
    NSURL * _editorBundleURL;
    int  _fullSizeRenderHeight;
    int  _fullSizeRenderWidth;
    BOOL  _isSubstandardRender;
    int  _mediaType;
    NSData * _penultimateRenderedJPEGData;
    NSURL * _penultimateRenderedVideoComplementContentURL;
    NSURL * _renderedContentURL;
    NSURL * _renderedVideoComplementContentURL;
}

@property (retain) PHAdjustmentData *adjustmentData;
@property int baseVersion;
@property (retain) NSURL *editorBundleURL;
@property (nonatomic) int fullSizeRenderHeight;
@property (nonatomic) int fullSizeRenderWidth;
@property (nonatomic) BOOL isSubstandardRender;
@property (readonly) int mediaType;
@property (retain) NSData *penultimateRenderedJPEGData;
@property (copy) NSURL *penultimateRenderedVideoComplementContentURL;
@property (copy) NSURL *renderedContentURL;
@property (copy) NSURL *renderedVideoComplementContentURL;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (unsigned int)maximumAdjustmentDataLength;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_renderURLWithExtensionForMediaType:(int)arg1;
- (id)adjustmentData;
- (id)assetAdjustmentsWithEditorBundleID:(id)arg1;
- (int)baseVersion;
- (void)clearRenderedContentURL;
- (id)description;
- (id)editorBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (int)fullSizeRenderHeight;
- (int)fullSizeRenderWidth;
- (id)initWithAdjustmentBaseVersion:(int)arg1 mediaType:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1;
- (id)initWithPlaceholderForCreatedAsset:(id)arg1;
- (BOOL)isSubstandardRender;
- (int)mediaType;
- (id)penultimateRenderedJPEGData;
- (id)penultimateRenderedVideoComplementContentURL;
- (id)renderedContentURL;
- (id)renderedVideoComplementContentURL;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseVersion:(int)arg1;
- (void)setEditorBundleURL:(id)arg1;
- (void)setFullSizeRenderHeight:(int)arg1;
- (void)setFullSizeRenderWidth:(int)arg1;
- (void)setIsSubstandardRender:(BOOL)arg1;
- (void)setPenultimateRenderedJPEGData:(id)arg1;
- (void)setPenultimateRenderedVideoComplementContentURL:(id)arg1;
- (void)setRenderedContentURL:(id)arg1;
- (void)setRenderedJPEGData:(id)arg1;
- (void)setRenderedVideoComplementContentURL:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)initWithPhotoEditSnapshot:(id)arg1;

@end
