/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary;



@interface IMPersonRegistrar : NSObject 
{
    NSMutableDictionary *_personMap;
}

+ (id)sharedInstance;

- (NSUInteger)retainCount;
- (id)init;
- (oneway void)release;
- (id)autorelease;
- (void)dealloc;
- (void)_dumpAllPersons;
- (void)registerPerson:(id)arg1;
- (id)personForUniqueID:(id)arg1;
- (void)unregisterPerson:(id)arg1;

@end