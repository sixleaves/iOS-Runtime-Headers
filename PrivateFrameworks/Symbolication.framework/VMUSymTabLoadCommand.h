/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUSymTabLoadCommand : VMULoadCommand 
{
    NSUInteger _symoff;
    NSUInteger _nsyms;
    NSUInteger _stroff;
    NSUInteger _strsize;
}


- (BOOL)isSymTab;
- (id)initWithMemory:(id)arg1;
- (NSUInteger)symoff;
- (NSUInteger)stroff;
- (NSUInteger)nsyms;
- (NSUInteger)strsize;

@end