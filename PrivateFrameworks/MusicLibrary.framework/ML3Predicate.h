/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Predicate : NSObject <NSCoding, NSCopying>

- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseStatementParameters;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;
- (id)spotlightPredicate;

@end
