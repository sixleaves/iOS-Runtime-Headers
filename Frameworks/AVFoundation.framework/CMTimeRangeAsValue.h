/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface CMTimeRangeAsValue : NSValue 
{
    struct { 
        struct { 
            long long value; 
            NSInteger timescale; 
            NSUInteger flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            NSInteger timescale; 
            NSUInteger flags; 
            long long epoch; 
        } duration; 
    } _timeRange;
}

+ (id)valueWithCMTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg1;

- (void)getValue:(void*)arg1;
- (struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })CMTimeRangeValue;
- (const char *)objCType;

@end