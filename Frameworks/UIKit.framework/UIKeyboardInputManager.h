/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIKeyboardInputManager : NSObject 
{
}

+ (id)keyboardUserDirectory;
+ (id)dynamicDictionaryFilePathForInputMode:(id)arg1;
+ (void)removeDynamicDictionaryForInputMode:(id)arg1;
+ (void)registerCentroid:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
+ (void)removeAllDynamicDictionaries;
+ (id)sharedInstanceForInputMode:(id)arg1 inHardwareKeyboardMode:(BOOL)arg2;
+ (void)clearAllCentroids;
+ (id)activeInstance;
+ (void)releaseSharedInstance;

- (void)clearDynamicDictionary;
- (struct __CFArray { }*)chargeableKeys;
- (NSInteger)keyCancel:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2 fromPath:(NSInteger)arg3 withIdentity:(NSInteger)arg4 forceShift:(BOOL)arg5;
- (void)registerCentroid:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)setAutoCorrects:(BOOL)arg1;
- (void)configureInputModeSpecificFeatures:(id)arg1;
- (void)setKeyboardMatchType:(NSInteger)arg1;
- (BOOL)usesCandidateSelection;
- (void)clearAllCentroids;
- (id)inputString;
- (NSUInteger)inputIndex;
- (BOOL)supportsSetPhraseBoundary;
- (void)textAccepted:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setInputIndex:(NSUInteger)arg1;
- (void)inputLocationChanged;
- (BOOL)shouldExtendPriorWord;
- (void)setInput:(id)arg1 typedString:(id)arg2;
- (id)autocorrection;
- (void)setAutoShift:(BOOL)arg1;
- (BOOL)isSentenceDelimiter:(unsigned short)arg1;
- (NSUInteger)inputCount;
- (BOOL)suppressCompletionsForFieldEditor;
- (NSUInteger)defaultCandidateIndex;
- (BOOL)stringEndsWord:(id)arg1;
- (id)stringForDoubleKey:(id)arg1;
- (id)addInput:(id)arg1 flags:(NSUInteger)arg2 point:(struct CGPoint { float x1; float x2; })arg3 firstDelete:(NSUInteger*)arg4 fromVariantKey:(BOOL)arg5;
- (BOOL)suppressesCandidateDisplay;
- (void)lastAcceptedCandidateCorrected;
- (id)shadowTyping;
- (void)decreaseUserFrequency:(id)arg1;
- (id)deleteFromInput:(NSUInteger*)arg1;
- (BOOL)usesAutoDeleteWord;
- (void)deleteFromStrokeHistory:(BOOL)arg1;
- (void)candidateAccepted:(id)arg1;
- (id)remainingInput;
- (id)defaultCandidate;
- (void)configureKeyboard:(id)arg1 forCandidates:(id)arg2;
- (void)addToTypingHistory:(id)arg1;
- (void)increaseUserFrequency:(id)arg1;
- (void)configureKeyboard:(id)arg1 forAutocorrection:(id)arg2;
- (void)acceptInput;
- (BOOL)inputEmpty;
- (id)candidates;
- (void)setCalculatesChargedKeyProbabilities:(BOOL)arg1;
- (void)setShallowPrediction:(BOOL)arg1;
- (void)setKeyboardEventsLagging:(BOOL)arg1;
- (BOOL)setInputMode:(id)arg1;
- (void)setShift:(BOOL)arg1;
- (BOOL)suppliesCompletions;
- (BOOL)acceptInputString:(id)arg1;
- (void)setPhraseBoundary:(NSUInteger)arg1;
- (NSUInteger)phraseBoundary;
- (void)clearInput;
- (id)setInputObject:(id)arg1;
- (id)addInputObject:(id)arg1;
- (struct __CFDictionary { }*)chargedKeyProbabilities;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (BOOL)canHandleKeyHitTest;
- (void)clearKeyAreas;
- (void)registerKeyArea:(struct CGPoint { float x1; float x2; })arg1 withRadii:(struct CGPoint { float x1; float x2; })arg2 forKeyCode:(unsigned short)arg3 forLowerKey:(id)arg4 forUpperKey:(id)arg5;
- (NSInteger)keyHitTest:(struct CGPoint { float x1; float x2; })arg1 touchStage:(NSInteger)arg2 atTime:(double)arg3 withTouch:(id)arg4 forceShift:(BOOL)arg5;
- (BOOL)keySlidIntoSwipe;
- (id)searchStringForMarkedText;

@end