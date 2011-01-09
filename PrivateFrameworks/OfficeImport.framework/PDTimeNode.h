/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDVideoMediaNode, PDAnimateRotateBehavior, PDParallelTimeNodeGroup, PDAnimateScaleBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateEffectBehavior, PDAnimateColorBehavior, PDAnimateTimeBehavior, PDSequentialTimeNodeGroup, PDCmdBehavior, NSMutableArray, PDAudioMediaNode;



@interface PDTimeNode : NSObject 
{
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioMediaNode *mAudio;
    PDVideoMediaNode *mVideo;
    PDParallelTimeNodeGroup *mParallelTimeNodeGroup;
    PDSequentialTimeNodeGroup *mSequentialTimeNodeGroup;
    NSMutableArray *mTimeConditionList;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}


- (id)commonBehavior;
- (id)timeBehavior;
- (void)setTimeBehavior:(id)arg1;
- (id)effectBehavior;
- (void)setEffectBehavior:(id)arg1;
- (id)motionBehavior;
- (void)setMotionBehavior:(id)arg1;
- (id)rotateBehavior;
- (void)setRotateBehavior:(id)arg1;
- (id)scaleBehavior;
- (void)setScaleBehavior:(id)arg1;
- (id)colorBehavior;
- (void)setColorBehavior:(id)arg1;
- (id)audio;
- (void)setAudio:(id)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)parallel;
- (void)setParallel:(id)arg1;
- (id)sequential;
- (void)setSequential:(id)arg1;
- (id)timeConditions;
- (void)setTimeConditions:(id)arg1;
- (id)behavior;
- (void)setBehavior:(id)arg1;
- (id)cmdBehavior;
- (void)setCmdBehavior:(id)arg1;
- (id)init;
- (void)dealloc;

@end