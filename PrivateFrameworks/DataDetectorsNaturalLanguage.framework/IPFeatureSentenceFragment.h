/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureSentenceFragment : NSObject {
    unsigned int  _clusterType;
    double  _probability_Confirmation;
    double  _probability_None;
    double  _probability_Proposal;
    double  _probability_Rejection;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
}

@property unsigned int clusterType;
@property (nonatomic, readonly) unsigned int mainPolarity;
@property double probability_Confirmation;
@property double probability_None;
@property double probability_Proposal;
@property double probability_Rejection;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;

+ (id)fragmentWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 clusterType:(unsigned int)arg2;

- (unsigned int)clusterType;
- (id)description;
- (unsigned int)mainPolarity;
- (float)probability_Confirmation;
- (float)probability_None;
- (float)probability_Proposal;
- (float)probability_Rejection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setClusterType:(unsigned int)arg1;
- (void)setProbability_Confirmation:(float)arg1;
- (void)setProbability_None:(float)arg1;
- (void)setProbability_Proposal:(float)arg1;
- (void)setProbability_Rejection:(float)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end